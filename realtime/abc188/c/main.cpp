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

  vector<ll> a(pow(2, n - 1));
  vector<ll> b(pow(2, n - 1));
  rep(i, pow(2, n - 1)) cin >> a[i];
  rep(i, pow(2, n - 1)) cin >> b[i];

  int maxIndexA = max_element(a.begin(), a.end()) - a.begin();
  int maxElementA = *max_element(a.begin(), a.end());
  int maxIndexB = max_element(b.begin(), b.end()) - b.begin();
  int maxElementB = *max_element(b.begin(), b.end());

  if (maxElementA > maxElementB) {
    cout << maxIndexB + pow(2, n - 1) + 1 << endl;
  } else {
    cout << maxIndexA + 1 << endl;
  }
}
