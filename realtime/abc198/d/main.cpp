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

template <typename Iterator>
inline bool next_combination(const Iterator first, Iterator k, const Iterator last) {
  /* Credits: Thomas Draper */
  if ((first == last) || (first == k) || (last == k)) return false;
  Iterator itr1 = first;
  Iterator itr2 = last;
  ++itr1;
  if (last == itr1) return false;
  itr1 = last;
  --itr1;
  itr1 = k;
  --itr2;
  while (first != itr1) {
    if (*--itr1 < *itr2) {
      Iterator j = k;
      while (!(*itr1 < *j)) ++j;
      iter_swap(itr1, j);
      ++itr1;
      ++j;
      itr2 = k;
      rotate(itr1, j, last);
      while (last != j) {
        ++j;
        ++itr2;
      }
      rotate(k, itr2, last);
      return true;
    }
  }
  rotate(first, k, last);
  return false;
}

int main() {
  string s1, s2, s3;
  cin >> s1;
  cin >> s2;
  cin >> s3;

  set<char> ss;
  rep(i, s1.size()) { ss.insert(s1[i]); }
  rep(i, s2.size()) { ss.insert(s2[i]); }
  rep(i, s3.size()) { ss.insert(s3[i]); }

  ll kind = ss.size();
  if (kind > 10) {
    cout << "UNSOLVABLE" << endl;
    return 0;
  }

  map<char, ll> mp;

  vector<ll> v(10);
  iota(v.begin(), v.end(), 0);
  vector<ll> v2(kind);
  do {
    rep(i, kind) { v2[i] = v[i]; }
    do {
      decltype(ss)::iterator itr = ss.begin();
      rep(i, kind) {
        mp[*itr] = v2[i];
        ++itr;
      }
      string n1s = "";
      rep(i, s1.size()) { n1s += to_string(mp[s1[i]]); }
      ll n1 = stoll(n1s);
      string n2s = "";
      rep(i, s2.size()) { n2s += to_string(mp[s2[i]]); }
      ll n2 = stoll(n2s);
      string n3s = "";
      rep(i, s3.size()) { n3s += to_string(mp[s3[i]]); }
      ll n3 = stoll(n3s);

      if (n1 == 0) continue;
      if (n2 == 0) continue;
      if (n3 == 0) continue;
      if (to_string(n1).size() != s1.size()) continue;
      if (to_string(n2).size() != s2.size()) continue;
      if (to_string(n3).size() != s3.size()) continue;
      if (n1 + n2 != n3) continue;
      cout << n1 << endl;
      cout << n2 << endl;
      cout << n3 << endl;
      return 0;

    } while (next_permutation(v2.begin(), v2.end()));

  } while (next_combination(v.begin(), v.begin() + kind, v.end()));

  cout << "UNSOLVABLE" << endl;
}
