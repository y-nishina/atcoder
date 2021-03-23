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
  string s, t;
  cin >> s >> t;

  ll tDiff = 0;
  vector<ll> diffIndex;
  rep(i, t.length() - 1) {
    if (t[i] != t[i + 1]) {
      tDiff++;
      diffIndex.push_back(i);
    }
  }
  ll flag = false;
  if (tDiff > t.length() / 2) {
    flag = true;
  }

  ll m = INF64;
  ll lastDiff = 0;
  rep(i, s.length() - t.length() + 1) {
    ll diff = 0;
    if (flag) {
      diff = t.size() - lastDiff;
    } else {
      diff = lastDiff;
    }
    if (i == 0) {
      rep(j, t.length()) {
        if (t[j] != s[i + j]) {
          diff++;
        }
      }
    } else {
      rep(j, diffIndex.size()) {
        if (t[j] != s[i + j]) {
          diff++;
        } else {
          diff--;
        }
      }
    }
    m = min(m, diff);
    lastDiff = diff;
  }

  cout << m << endl;
}
