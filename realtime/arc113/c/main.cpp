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

int main() {
  string s;
  cin >> s;

  ll ans = 0;
  char c = s[s.size() - 1];
  ll cnt = 1;
  bool renzoku = false;
  char zenkai;
  ll zenkaiCount = 0;
  for (ll i = s.size() - 2; i >= 0; i--) {
    if (c == s[i]) {
      if (!renzoku) {
        ans += cnt - count(s.begin() + i + 1, s.end(), c);
        cout << cnt << endl;
        cout << count(s.begin() + i + 1, s.end(), c) << endl;
        // ans += cnt - 1;
        // if (c == zenkai) {
        //   ans -= zenkaiCount;
        //   zenkai = c;
        //   zenkaiCount = cnt + 1;
        // }
      }
      renzoku = true;
    } else {
      renzoku = false;
    }
    cnt++;
    c = s[i];
  }

  cout << ans << endl;
}
