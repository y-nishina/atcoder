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
  ll a, b, c;
  cin >> a >> b >> c;

  ll ans = 0;
  ll a1 = a % 10;
  ll b1 = b % 10;

  ll bmod = b;
  if (b1 == 3 || b1 == 7) {
    if (c % 2 == 0) {
      bmod = 1;
    } else {
      bmod = 3;
    }
  } else {
    bmod = b % 4;
    if (c != 1) {
      bmod *= b % 4;
      bmod %= 4;
    }
  }

  if (bmod == 0) bmod = 4;

  ans = pow(a1, bmod);
  ans %= 10;

  cout << ans << endl;
}
