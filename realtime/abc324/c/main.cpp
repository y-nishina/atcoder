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
  string t;
  cin >> n >> t;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  vector<ll> ans(0);
  rep(i, n) {
    bool isContinue = false;

    // 条件1
    if (t == s[i]) {
      ans.push_back(i + 1);
      continue;
    }

    // 条件2
    rep(j, t.size()) {
      string u = "";
      rep(k, t.size()) {
        if (k != j) u.push_back(t[k]);
      }
      if (s[i] == u) {
        ans.push_back(i + 1);
        isContinue = true;
        continue;
      }
    }
    if (isContinue) continue;

    // 条件3
    rep(j, s[i].size()) {
      string u = "";
      rep(k, s[i].size()) {
        if (k != j) u.push_back(s[i][k]);
      }
      if (t == u) {
        ans.push_back(i + 1);
        isContinue = true;
        continue;
      }
    }
    if (isContinue) continue;

    // 条件4
    if (t.size() != s[i].size()) continue;
    ll count = 0;
    rep(j, t.size()) {
      if (t[j] != s[i][j]) count++;
    }
    if (count <= 1) {
      ans.push_back(i + 1);
      continue;
    }
  }

  cout << ans.size() << endl;
  rep(i, ans.size()) {
    cout << ans[i];
    if (i != ans.size() - 1) {
      cout << " ";
    } else {
      cout << endl;
    }
  }
}
