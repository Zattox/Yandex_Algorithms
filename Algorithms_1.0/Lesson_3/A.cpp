#include <iostream>
#include <set>
#include <unordered_set>

using std::cin, std::cout, std::set, std::unordered_set;

int main() {
  set<int> ans;
  int x;
  while (cin >> x) {
    ans.insert(x);
  }

  cout << ans.size();

  return 0;
}
