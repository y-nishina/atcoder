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
  ll n, m;
  cin >> n >> m;
  vector<ll> a(m), b(m);
  rep(i, m) cin >> a[i] >> b[i];

  ll k;
  cin >> k;
  vector<ll> c(k), d(k);
  rep(i, k) cin >> c[i] >> d[i];

  vector<vector<ll>> nbv(pow(2, k), vector<ll>(n));
  rep(i, pow(2, k)) {
    rep(j, k) {
      if (((i >> j) & 1) == 0) {
        nbv[i][c[j] - 1] = 1;
      } else {
        nbv[i][d[j] - 1] = 1;
      }
    }
  }

  ll ans = 0;
  rep(i, pow(2, k)) {
    ll count = 0;
    rep(j, m){
      if(nbv[i][a[j]-1] == 1 && nbv[i][b[j]-1] == 1){
        count++;
      }
    }
    ans = max(ans, count);
  }

  cout << ans << endl;
}
