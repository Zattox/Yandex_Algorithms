#include <iostream>
#include <set>
#include <vector>

using std::cin, std::cout;
using std::set, std::pair, std::max, std::min, std::vector;

void solve() {
  int t, d, n;
  cin >> t >> d >> n;
  vector<pair<int, int>> point(n + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> point[i].first >> point[i].second;
  }

  int left_diag = 0, right_diag = 0;
  int up_diag = 0, down_diag = 0;
  for (int i = 1; i <= n; ++i) {
    left_diag -= t;
    right_diag += t;
    up_diag += t;
    down_diag -= t;

    int cur_left = (point[i].first + point[i].second) - d;
    int cur_right = (point[i].first + point[i].second) + d;
    int cur_up = (point[i].first - point[i].second) + d;
    int cur_down = (point[i].first - point[i].second) - d;

    left_diag = max(left_diag, cur_left);
    right_diag = min(right_diag, cur_right);
    up_diag = min(up_diag, cur_up);
    down_diag = max(down_diag, cur_down);
  }

  vector<pair<int, int>> ans;
  for (int dx = left_diag; dx <= right_diag; ++dx) {
    for (int dy = down_diag; dy <= up_diag; ++dy) {
      if (abs(dy - dx) % 2 == 0) {
        int y = (dy - dx) / (-2.0);
        int x = dx - y;
        ans.push_back({x, y});
      }
    }
  }

  cout << ans.size() << "\n";
  for (auto el : ans) {
    cout << el.first << ' ' << el.second << "\n";
  }

}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}