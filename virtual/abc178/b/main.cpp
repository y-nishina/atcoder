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
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a >= 0 && c >= 0) {
    cout << b * d << endl;
    return 0;
  }

  if (a < 0 && c < 0) {
    cout << max(a * c, b * d) << endl;
    return 0;
  }

  if (a * b < 0 || c * d < 0) {
    cout << 0 << endl;
    return 0;
  }

  cout << max(a * d, b * c) << endl;
}
