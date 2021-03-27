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
  ld n;
  cin >> n;
  ld x00, y00;
  ld x0, y0, xn2, yn2;
  cin >> x00 >> y00;
  cin >> xn2 >> yn2;

  x0 = 0;
  y0 = 0;
  xn2 -= x00;
  yn2 -= y00;

  ld xdiff = xn2 - x0;
  ld ydiff = yn2 - y0;

  ld naikaku = (ld)180 * (n - 2) / n;
  ld kyori2jo = (xdiff * xdiff) + (ydiff * ydiff);
  ld kyori = (ld)sqrtl(kyori2jo);
  ld hen = kyori * (ld)sinl(M_PI / n);
  ld kakudo = -(naikaku / (ld)2 - (ld)(ydiff / xdiff));

  ld ansx = hen * (ld)cosl(kakudo * M_PI / (ld)180);
  ld ansy = hen * (ld)sinl(kakudo * M_PI / (ld)180);

  ansx += x00;
  ansy += y00;

  cout << fixed << setprecision(10);
  cout << ansx << ' ' << ansy << endl;
}
