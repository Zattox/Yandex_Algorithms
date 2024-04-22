#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> arr(n), pref(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i].first >> arr[i].second;
  }

  for (int i = 1; i < n; ++i) {
    int diff = arr[i].second - arr[i - 1].second;
    if (diff > 0) {
      pref[i].first = pref[i - 1].first + diff;
      pref[i].second = pref[i - 1].second;
    } else {
      pref[i].first = pref[i - 1].first;
      pref[i].second = pref[i - 1].second + diff;
    }
  }

  int m;
  cin >> m;
  for (int i = 0; i < m; ++i) {
    int x, y;
    cin >> x >> y;
    if (x < y) {
      cout << pref[y - 1].first - pref[x - 1].first << '\n';
    } else if (x > y) {
      cout << abs(pref[y - 1].second - pref[x - 1].second) << '\n';
    } else {
      cout << 0 << '\n';
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int t = 1;
  //cin >> t;
  while (t > 0) {
    solve();
    --t;
  }

  return 0;
}
