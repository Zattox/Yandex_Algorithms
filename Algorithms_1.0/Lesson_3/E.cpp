#include <iostream>
#include <set>
#include <unordered_set>

using std::cin, std::cout;
using std::set, std::unordered_set;
using std::string;

int main() {
  string num;
  int x, y, z;
  cin >> x >> y >> z >> num;

  set<int> ans;
  for(auto el : num) {
    if (el - '0' != x && el - '0' != y && el - '0' != z) {
      ans.insert(el - '0');
    }
  }

  cout << ans.size();

  return 0;
}
