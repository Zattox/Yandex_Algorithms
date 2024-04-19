#include <iostream>
#include <set>
#include <vector>

using std::cin, std::cout;
using std::set, std::string, std::vector;


void solve() {
  int n, m;
  cin >> n >> m;
  set<int> st_a, st_b;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    st_a.insert(x);
  }
  for (int i = 0; i < m; ++i) {
    int x;
    cin >> x;
    st_b.insert(x);
  }

  set<int> intersection;
  for (auto el : st_a) {
    if (st_b.count(el) > 0) {
      intersection.insert(el);
    }
  }

  for (auto el : intersection) {
    st_a.erase(el);
    st_b.erase(el);
  }

  cout << intersection.size() << '\n';
  for (auto el : intersection) {
    cout << el << ' ';
  }
  cout << '\n' << st_a.size() << '\n';
  for (auto el : st_a) {
    cout << el << ' ';
  }
  cout << '\n' << st_b.size() << '\n';
  for (auto el : st_b) {
    cout << el << ' ';
  }

}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}