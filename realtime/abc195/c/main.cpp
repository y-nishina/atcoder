#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define repab(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define repr(i, n) for (ll i = (ll)(n); i >= 0; i--)
#define vsort(v) sort(v.begin(), v.end())
#define vsortr(v) sort(v.rbegin(), v.rend())

//定数
#define INF32 2147483647           // 2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807  // 9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007             //問題による

int main() {
  ll n;
  cin >> n;

  ll ans = 0;
  if (n < 1000) {
    ans = 0;
  }
  if (n >= 1000 && n < 1000000) {
    ans = n - 1000 + 1;
  }
  if (n >= 1000000 && n < 1000000000) {
    ans = (1000000 - 1000) + 2 * (ll)(n - 1000000 + 1);
  }
  if (n >= 1000000000 && n < 1000000000000) {
    ans = (1000000 - 1000) + 2 * (ll)(1000000000 - 1000000) + 3 * (ll)(n - 1000000000 + 1);
  }
  if (n >= 1000000000000 && n < 1000000000000000) {
    ans = (1000000 - 1000) + 2 * (ll)(1000000000 - 1000000) + 3 * (ll)(1000000000000 - 1000000000) +
          4 * (ll)(n - 1000000000000 + 1);
  }
  if (n == 1000000000000000) {
    ans = (1000000 - 1000) + 2 * (ll)(1000000000 - 1000000) + 3 * (ll)(1000000000000 - 1000000000) +
          4 * (ll)(1000000000000000 - 1000000000000) + 5;
  }

  cout << ans << endl;
}
