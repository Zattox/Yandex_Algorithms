#include <iostream>
#include <unordered_set>
#include <map>
#include <vector>

using std::cin, std::cout;
using std::unordered_set, std::map, std::string, std::vector;

void solve() {
  int n;
  cin >> n;
  map<int, unordered_set<int>> mp;
  for (int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;
    mp[x].insert(y);
  }

  cout << mp.size();
}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}