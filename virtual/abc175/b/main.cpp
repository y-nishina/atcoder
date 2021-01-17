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
  ll n;
  cin >> n;

  vector<ll> l(n);
  rep(i, n) cin >> l[i];

  vsort(l);

  ll ans = 0;
  for (ll i = 0; i < n - 2; i++) {
    for (ll j = i + 1; j < n - 1; j++) {
      for (ll k = j + 1; k < n; k++) {
        if (l[i] == l[j] || l[j] == l[k] || l[k] == l[i]) {
          continue;
        }
        if (l[i] + l[j] > l[k]) {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;
}
