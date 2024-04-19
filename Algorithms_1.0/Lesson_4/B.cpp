#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using std::cin, std::cout;

void solve() {
  std::unordered_map<std::string, int> mp;
  std::string word;
  while (cin >> word) {
    cout << mp[word] << ' ';
    mp[word]++;
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  solve();

  return 0;
}
