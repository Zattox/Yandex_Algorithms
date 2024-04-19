#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> c(n);
  for (int i = 0; i < n; ++i) {
    cin >> c[i];
  }

  int k;
  cin >> k;
  for (int i = 0; i < k; ++i) {
    int x;
    cin >> x;
    --c[x - 1];
  }

  for (int i = 0; i < n; ++i) {
    if (c[i] >= 0) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }

}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();

  return 0;
}
