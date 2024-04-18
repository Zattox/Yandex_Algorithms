#include <iostream>
#include <set>
#include <unordered_set>

using std::cin, std::cout, std::set, std::unordered_set;

void parse(std::string str, set<int> &st) {
  int i = 0;
  while (i < str.size()) {
    std::string num = "";
    while (i < str.size() && str[i] >= '0' && str[i] <= '9') {
      num += str[i];
      ++i;
    }
    st.insert(atoi(num.c_str()));
    ++i;
  }
}

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  std::string arr1, arr2;
  std::getline(cin, arr1);
  std::getline(cin, arr2);

  set<int> st1, st2;
  parse(arr1, st1);
  parse(arr2, st2);

  for (auto &el : st1) {
    if (st2.count(el) > 0) {
      cout << el << ' ';
    }
  }

  return 0;
}
