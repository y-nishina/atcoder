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
  vector<ll> v;
  v.push_back(2);
  for (ll i = 3; i <= n; i++) {
    ll size = v.size();

    bool b = false;
    rep(j, size) {
      ll a = v[j];
      if (a * a > i) break;
      rep(k, size) {
        ll b = v[k];
        if ((ll)pow(a, b) == (ll)i) {
          ans++;
          b = true;
          break;
        }
        if (pow(a, b) > i) break;
      }
      if (b) break;
    }
    if (!b) {
      v.push_back(i);
    }
  }

  cout << n - ans << endl;
}
