#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using std::cin, std::cout;

void solve() {
  std::map<std::string, int> mp;
  std::string word;
  int maxi = -1;
  while (cin >> word) {
    mp[word]++;
    maxi = std::max(maxi, mp[word]);
  }

  for (auto el : mp) {
    if (el.second == maxi) {
      cout << el.first;
      break;
    }
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
