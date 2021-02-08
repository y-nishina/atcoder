#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define repab(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define repr(i, n) for (ll i = (ll)(n); i >= 0; i--)
#define vsort(v) sort(v.begin(), v.end())
#define vsortr(v) sort(v.begin(), v.end(), greater<ll>{})

//定数
#define INF32 2147483647           // 2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807  // 9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007             //問題による
ld EPS = 1e-17;

int main() {
  ld x, y, r;
  cin >> x >> y >> r;

  ll ans = 0;
  repab(i, ceill(x - r - EPS), floorl(x + r + EPS) + 1) {
    ll b = (ll)ceill(y - sqrtl(powl(r, 2) - powl((i - x), 2)) - EPS);
    ll t = (ll)floorl(y + sqrtl(powl(r, 2) - powl((i - x), 2)) + EPS);
    if (t - b >= 0) ans += t - b + 1;
  }

  cout << ans << endl;
}
