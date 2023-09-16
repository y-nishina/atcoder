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
  ll c[3][3];
  cin >> c[0][0] >> c[0][1] >> c[0][2];
  cin >> c[1][0] >> c[1][1] >> c[1][2];
  cin >> c[2][0] >> c[2][1] >> c[2][2];

  ll hit = 0;

  rep(i, 3) {
    if (c[i][0] == c[i][1] || c[i][1] == c[i][2] || c[i][2] == c[i][0]) {
      hit++;
    }
  }
  rep(j, 3) {
    if (c[0][j] == c[1][j] || c[1][j] == c[2][j] || c[2][j] == c[0][j]) {
      hit++;
    }
  }
  if (c[0][0] == c[1][1] || c[1][1] == c[2][2] || c[2][2] == c[0][0]) {
    hit++;
  }
  if (c[0][2] == c[1][1] || c[1][1] == c[2][0] || c[2][0] == c[0][2]) {
    hit++;
  }

  ll ans = 0;
  if (hit == 0) {
    ans = 0;
  }

  cout << hit << endl;
}
