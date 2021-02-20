#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long double ll;
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
  string x;
  ll m;
  cin >> x;
  cin >> m;

  string xx = x;
  sort(xx.begin(), xx.end());
  reverse(xx.begin(), xx.end());
  ll d = xx[0] - '0';

  ll ans = 0;
  ll n = d + 1;
  while (true) {
    ll num = 0;
    rep(i, x.size()) {
      num += (x[i] - '0') * powl(n, (ll)(x.size() - i - 1));
      if (num > m) break;
    }
    if (num > m) break;
    ans++;
    n++;
  }

  cout << ans << endl;
}
