#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using std::cin, std::cout;
using std::set, std::string, std::vector;

void solve() {
  int n;
  cin >> n;
  vector<std::pair<long, long>> mas(n);
  for (int i = 0; i < n; ++i)
    cin >> mas[i].first >> mas[i].second;
  int sum = n - 1, ans = 0;
  set<int> s;
  std::sort(mas.begin(), mas.end());
  for (int i = 0; i < n; ++i) {
    if (s.find(mas[i].first) == s.end()) {
      if (abs(mas[i].first) + abs(mas[i].second) == sum) {
        s.insert(mas[i].first);
        ++ans;
      }
    }
  }
  cout << ans;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}