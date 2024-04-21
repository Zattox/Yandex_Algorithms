#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> shirt(n);
  for (int i = 0; i < n; ++i) {
    cin >> shirt[i];
  }

  int m;
  cin >> m;
  vector<int> pants(m);
  for (int i = 0; i < m; ++i) {
    cin >> pants[i];
  }

  int i = 0, j = 0, ans_s = shirt[i], ans_p = pants[j];
  int mini = abs(shirt[0] - pants[0]);
  while (i < n && j < m) {
    if (abs(shirt[i] - pants[j]) < mini) {
      mini = abs(shirt[i] - pants[j]);
      ans_s = shirt[i];
      ans_p = pants[j];
    } else if (shirt[i] >= pants[j]) {
      ++j;
    } else {
      ++i;
    }
  }

  cout << ans_s << ' ' << ans_p;
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
