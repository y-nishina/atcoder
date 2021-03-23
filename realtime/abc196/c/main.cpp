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
  ll n;
  cin >> n;

  ll ans = 0;
  string s = to_string(n);
  ll length = s.length();

  if (length < 2) {
    ans = 0;
  }
  if (length == 2) {
    ans = n / 11;
  }
  if (length == 3) {
    ans = 9;
  }
  if (length == 4) {
    ans = n / 101;
  }
  if (length == 5) {
    ans = 99;
  }
  if (length == 6) {
    ans = n / 1001;
  }
  if (length == 7) {
    ans = 999;
  }
  if (length == 8) {
    ans = n / 10001;
  }
  if (length == 9) {
    ans = 9999;
  }
  if (length == 10) {
    ans = n / 100001;
  }
  if (length == 11) {
    ans = 99999;
  }
  if (length == 12) {
    ans = n / 1000001;
  }
  if (length == 13) {
    ans = 999999;
  }

  cout << ans << endl;
}
