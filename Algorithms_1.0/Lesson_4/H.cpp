#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

bool check(unordered_map<char, int> &mp, unordered_map<char, int> &cur) {
  bool flag = true;
  for (auto el : cur) {
    if (el.second > 0 && mp[el.first] != el.second) {
      flag = false;
      break;
    }
  }
  return flag;
}

void solve() {
  int g, s;
  string word, text;
  cin >> g >> s >> word >> text;

  unordered_map<char, int> mp, cur;
  for(int i = 0; i < g; ++i) {
    ++mp[word[i]];
    ++cur[text[i]];
  }

  int ans = check(mp, cur);
  for (int i = 0; i + g < s; ++i) {
    --cur[text[i]];
    ++cur[text[i + g]];
    ans += check(mp, cur);
  }

  cout << ans;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();

  return 0;
}
