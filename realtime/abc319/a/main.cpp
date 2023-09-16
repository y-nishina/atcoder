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
  string s;
  cin >> s;

  ll ans;
  if (s == "tourist") {
    ans = 3858;
  } else if (s == "ksun48") {
    ans = 3679;
  } else if (s == "Benq") {
    ans = 3658;
  } else if (s == "Um_nik") {
    ans = 3648;
  } else if (s == "apiad") {
    ans = 3638;
  } else if (s == "Stonefeang") {
    ans = 3630;
  } else if (s == "ecnerwala") {
    ans = 3613;
  } else if (s == "mnbvmar") {
    ans = 3555;
  } else if (s == "newbiedmy") {
    ans = 3516;
  } else if (s == "semiexp") {
    ans = 3481;
  }

  cout << ans << endl;
}
