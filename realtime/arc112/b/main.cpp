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
  ll b, c;
  cin >> b >> c;

  ll lmi, lma, rmi, rma;
  if (b == 0) {
    lmi = b - c / 2;
    lma = b;
    rmi = b - c / 2;
    rma = b + (c - 1) / 2;
  } else if (b < 0) {
    lmi = b - c / 2;
    lma = b;
    rmi = -b - (c - 1) / 2;
    rma = -b + (c - 2) / 2;
  } else if (b > 0) {
    lmi = -b - (c - 1) / 2;
    lma = -(b - (c - 1) / 2);
    rmi = b - c / 2;
    rma = b + (c - 2) / 2;
  }

  ll ans = 0;
  if (lma >= rmi) {
    ans = rma - lmi + 1;
  } else {
    ans = lma - lmi + 1 + rma - rmi + 1;
  }
  cout << ans << endl;
}
