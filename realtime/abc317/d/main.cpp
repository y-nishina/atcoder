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
  ll n;
  cin >> n;
  vector<ll> x(n + 1), y(n + 1), z(n + 1);
  repab(i, 1, n) cin >> x[i] >> y[i] >> z[i];

  ll dp[n][MOD];
  dp[0][0] = 0;

  ll a = 0;
  ll b = 0;
  rep(i, n) {
    if (x[i] > y[i]) {
      a += z[i];
    } else {
      b += z[i];
    }
  }
  ll ans = 0;
  ll target = 0;
  if (b - a < 0) {
    ans = 0;
    cout << ans << endl;
  } else {
    target = ceil((b - a) / 2);
  }

  repab(i, 1, n) {
    repab(j, 0, max(x[i], y[i])) {
      if (x[i] > y[i]) {
        dp[i][j] = dp[i - 1][j];
      } else {
        if (j < y[i] - x[i]) {
          dp[i][j] = dp[i - 1][j];
        } else {
          dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - (y[i] - x[i])] + z[i]);
        }
      }
    }
  }
  rep(i, MOD) {
    if (target < dp[n][i]) {
      ans = i;
      break;
    }
  }

  cout << ans << endl;
}
