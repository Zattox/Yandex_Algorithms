#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using std::cin, std::cout;
using std::string;

void solve() {
  int n;
  cin >> n;
  std::unordered_map<string, string> mp;

  for (int i = 0; i < n; ++i) {
    string a, b;
    cin >> a >> b;
    mp[a] = b;
    mp[b] = a;
  }

  string question;
  cin >> question;
  cout << mp[question];

}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();

  return 0;
}
