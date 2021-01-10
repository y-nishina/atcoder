#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define repab(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define repr(i, n) for (ll i = (ll)(n); i >= 0; i--)
#define vsort(v) sort(v.begin(), v.end())
#define vsortr(v) sort(v.begin(), v.end(), greater<ll>{})

//定数
#define INF32 2147483647           // 2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807  // 9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007             //問題による

int main() {
  ll n, C;
  cin >> n >> C;
  vector<ll> a(n), b(n), c(n);
  rep(i, n) cin >> a[i] >> b[i] >> c[i];
  rep(i, n) a[i]--;

  map<ll, ll> map;
  rep(i, n) {
    map[a[i]] += c[i];
    map[b[i]] -= c[i];
  }

  ll sum = 0;
  ll ans = 0;
  ll last = 0;
  for (auto m : map) {
    ans += min(sum, C) * (m.first - last);
    sum += m.second;
    last = m.first;
  }

  cout << ans << endl;
}
