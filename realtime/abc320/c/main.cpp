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

ll m;
string s1, s2, s3;

ll solve(char num, string s1, string s2, string s3) {
  ll index = -1;
  ll round = 0;
  rep(i, m) {
    cout << i << endl;
    cout << to_string(s1[i]) << endl;
    cout << to_string(num) << endl;
    if (s1[i] == num) {
      index = i;
      break;
    }
  }
  if (index == -1) {
    return INF32;
  }

  ll index2 = -1;
  repab(i, index + 1, m) {
    if (s2[i] == to_string(num)) {
      index2 = i;
      break;
    }
  }
  if (index2 == -1) {
    round++;
    rep(i, m) {
      if (s2[i] == to_string(num)) {
        index2 = i;
        break;
      }
    }
    if (index2 == -1) {
      return INF32;
    }
  }

  ll index3 = -1;
  repab(i, index2 + 1, m) {
    if (s3[i] == to_string(num)) {
      index3 = i;
      break;
    }
  }
  if (index3 == -1) {
    round++;
    rep(i, m) {
      if (s3[i] == to_string(num)) {
        index3 = i;
        break;
      }
    }
    if (index3 == -1) {
      return INF32;
    }
  }

  return round * m + index3;
}

int main() {
  cin >> m;
  cin >> s1;
  cin >> s2;
  cin >> s3;

  ll ans = INF32;
  rep(i, 10) {
    ans = min(ans, solve(i, s1, s2, s3));
    ans = min(ans, solve(i, s1, s3, s2));
    ans = min(ans, solve(i, s2, s1, s3));
    ans = min(ans, solve(i, s2, s3, s1));
    ans = min(ans, solve(i, s3, s1, s2));
    ans = min(ans, solve(i, s3, s2, s1));
  }
  if (ans == INF32) {
    ans = -1;
  }

  cout << ans << endl;
}
