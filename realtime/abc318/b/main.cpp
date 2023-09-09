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
  cin >> n;
  vector<ll> a(n), b(n), c(n), d(n);
  rep(i, n) cin >> a[i] >> b[i] >> c[i] >> d[i];

  ll ans[1000][1000];
  ll sum = 0;
  rep(i, n) {
    repab(j, a[i], b[i]) {
      repab(k, c[i], d[i]) {
        if (ans[j][k] == 0) {
          ans[j][k] = 1;
          sum++;
        }
      }
    }
  }

  cout << sum << endl;
}
