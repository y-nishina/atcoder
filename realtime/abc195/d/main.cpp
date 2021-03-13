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

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

int main() {
  ll n, m, q;
  cin >> n >> m >> q;
  vector<ll> w(n), v(n);
  rep(i, n) cin >> w[i] >> v[i];

  vector<ll> x(m);
  rep(i, m) cin >> x[i];

  rep(i, q) {
    ll l, r;
    cin >> l >> r;
    ll ans = 0;

    ll mm = m - (r - l + 1);
    vector<ll> xx(mm);
    rep(j, mm) {
      ll jj = j;
      while (jj >= l && jj <= r) {
        jj++;
      }
      xx[j] = x[jj];
    }

    vector<ll> data;
    vector<ll> com(n);
    for (int j = 0; j < n; j++) data.push_back(j);
    do {
      ll ansans = 0;
      for (int u = 0; u < mm; u++) {
        if (xx[u] >= w[data[u]]) {
          ansans += v[data[u]];
        }
      }
      ans = max(ans, ansans);

    } while (next_permutation(data.begin(), data.end()));

    cout << ans << endl;
  }
}
