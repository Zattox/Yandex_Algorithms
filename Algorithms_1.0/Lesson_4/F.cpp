#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

void solve() {
  map<string, map<string, ll>> mp;
  string name, product;
  ll cnt;
  while (cin >> name >> product >> cnt) {
    mp[name][product] += cnt;
  }

  for (auto man : mp) {
    cout << man.first << ":\n";
    for (auto el : man.second) {
      cout << el.first << ' ' << el.second << '\n';
    }
  }

}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  solve();

  return 0;
}
