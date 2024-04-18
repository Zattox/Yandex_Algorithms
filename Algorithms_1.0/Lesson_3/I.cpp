#include <iostream>
#include <set>
#include <vector>
#include <unordered_set>

using std::cin, std::cout;
using std::set, std::unordered_set, std::string, std::vector;

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  unordered_set<string> all_lang;
  vector<unordered_set<string>> people(n);

  for (int i = 0; i < n; ++i) {
    int m;
    cin >> m;
    for (int j = 0; j < m; ++j) {
      string lang;
      cin >> lang;
      all_lang.insert(lang);
      people[i].insert(lang);
    }
  }

  unordered_set<string> most_popular;
  for (auto el : all_lang) {
    bool flag = true;
    for (int i = 0; i < n; ++i) {
      if (people[i].count(el) == 0) {
        flag = false;
        break;
      }
    }
    if (flag) {
      most_popular.insert(el);
    }
  }

  cout << most_popular.size() << "\n";
  for (auto el : most_popular) {
    cout << el << "\n";
  }

  cout << all_lang.size() << "\n";
  for (auto el : all_lang) {
    cout << el << "\n";
  }

  return 0;
}
