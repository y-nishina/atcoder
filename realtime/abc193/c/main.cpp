#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
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
  for (ll i = 2; i <= n; i++) {
    for (ll j = 2; powl((ld)i, (ld)1.0 / j) >= (ld)2.0; j++) {
      ld nThRoot = powl((ld)i, (ld)1.0 / j);
      if ((ld)abs(nThRoot - floorl(nThRoot)) < (ld)0.0000000000001) {
        ans++;
        break;
      };
    }
  }

  cout << n - ans << endl;
}
