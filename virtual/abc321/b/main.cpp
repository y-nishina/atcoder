#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define repab(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define repr(i, n) for (ll i = (ll)(n); i >= 0; i--)
#define vsort(v) sort(v.begin(), v.end())
#define vsortr(v) sort(v.rbegin(), v.rend())

// 定数
#define INF32 2147483647           // 2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807  // 9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007             // 問題による

int main() {
  ll n, x;
  cin >> n >> x;
  vector<ll> a(n - 1);
  rep(i, n - 1) cin >> a[i];
  vsort(a);

  ll ans = 0;
  ll sum = 0;
  repab(i, 1, n - 2) { sum += a[i]; }
  if (sum >= x) {
    ans = 0;
  } else if (x - sum > a[n - 2]) {
    ans = -1;
  } else {
    ans = (x - sum <= a[0]) ? 0 : x - sum;
  }

  cout << ans << endl;
}
