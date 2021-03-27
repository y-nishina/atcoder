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
  ll h, w, x, y;
  cin >> h >> w >> x >> y;
  vector<string> s(h);
  rep(i, h) { cin >> s[i]; }

  ll ans = 0;
  // 上
  for (int i = x; i >= 1; i--) {
    if (s[i - 1][y - 1] == '#') break;
    ans++;
  }
  // 下
  for (int i = x; i <= h; i++) {
    if (s[i - 1][y - 1] == '#') break;
    ans++;
  }
  // 左
  for (int i = y; i >= 1; i--) {
    if (s[x - 1][i - 1] == '#') break;
    ans++;
  }
  // 右
  for (int i = y; i <= w; i++) {
    if (s[x - 1][i - 1] == '#') break;
    ans++;
  }
  ans -= 3;

  cout << ans << endl;
}
