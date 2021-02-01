#define _GLIBCXX_DEBUG
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
  ll n, k;
  cin >> n >> k;

  vector<ll> s(n, 0);
  vector<ll> d(k);
  rep(i, k) {
    cin >> d[i];
    vector<ll> a(d[i]);
    rep(j, d[i]) {
      cin >> a[j];
      s[a[j] - 1]++;
    }
  }

  ll ans = 0;
  rep(i, n) {
    if (s[i] == 0) ans++;
  }

  cout << ans << endl;
}
