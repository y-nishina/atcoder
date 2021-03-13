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

ll g1(ll x) {
  string s = to_string(x);
  sort(s.begin(), s.end());
  reverse(s.begin(), s.end());
  return stoll(s);
}

ll g2(ll x) {
  string s = to_string(x);
  sort(s.begin(), s.end());
  return stoll(s);
}

int main() {
  ll n, k;
  cin >> n >> k;

  // set<ll> s;
  ll ans = n;
  rep(i, k + 1) {
    if (i != 0) {
      ans = g1(ans) - g2(ans);
    }
    // if (s.find(ans) != s.end()) {
    //   break;
    // } else {
    // s.insert(ans);
    // }
  }

  cout << ans << endl;
}
