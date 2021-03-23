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

vector<string> split_naive(const string &s, char delim) {
  vector<string> elems;
  string item;
  for (char ch : s) {
    if (ch == delim) {
      if (!item.empty()) elems.push_back(item);
      item.clear();
    } else {
      item += ch;
    }
  }
  if (!item.empty()) elems.push_back(item);
  return elems;
}

int main() {
  string x;
  cin >> x;

  cout << split_naive(x, '.')[0] << endl;
}
