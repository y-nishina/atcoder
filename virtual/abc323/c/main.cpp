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
  ll n, m;
  cin >> n >> m;
  vector<ll> a(m);
  rep(i, m) cin >> a[i];
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  vector<ll> num(n);
  rep(i, n) {
    num[i] = i + 1;
    rep(j, m) {
      if (s[i][j] == 'o') {
        num[i] += a[j];
      }
    }
  }
  ll max_num = *max_element(num.begin(), num.end());

  rep(i, n) {
    ll answer = 0;
    vector<ll> rest;
    rep(j, m) {
      if (s[i][j] == 'x') rest.push_back(a[j]);
    }
    vsortr(rest);
    while (max_num > num[i]) {
      num[i] += rest[answer];
      answer++;
    }
    cout << answer << endl;
  }
}
