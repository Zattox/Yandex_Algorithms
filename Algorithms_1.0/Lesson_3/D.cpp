#include <iostream>
#include <set>
#include <unordered_set>

using std::cin, std::cout, std::set, std::unordered_set;

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  unordered_set<std::string> ans;
  std::string s;
  while (getline(cin, s)) {
    int i = 0;
    while (i < s.size()) {
      std::string word = "";
      while (i < s.size() && !std::isspace(s[i])) {
        word += s[i];
        ++i;
      }
      ans.insert(word);
      while (i < s.size() && std::isspace(s[i])) {
        ++i;
      }
    }
  }

  cout << ans.size();

  return 0;
}
