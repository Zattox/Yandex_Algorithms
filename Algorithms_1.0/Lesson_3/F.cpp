#include <iostream>
#include <map>
using std::cin, std::cout;
using std::map, std::string;

map<string, int> find_connects(string s) {
  map<string, int> ans;
  for (int i = 1; i < (int)s.size(); ++i) {
    string x;
    x.push_back(s[i - 1]);
    x.push_back(s[i]);
    ans[x] += 1;
  }
  return ans;
}

void solve() {
  string first, second;
  cin >> first >> second;

  auto st1 = find_connects(first);
  auto st2 = find_connects(second);

  long long ans = 0;
  for (auto &el : st1) {
    ans += 1ll * el.second * (st2[el.first] > 0);
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