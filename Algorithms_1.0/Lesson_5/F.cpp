#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second == p2.second) {
    return p1.first < p2.first;
  }
  return p1.second < p2.second;
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  int m;
  cin >> m;
  vector<pair<int, int>> info(m);
  for (int i = 0; i < m; ++i) {
    cin >> info[i].first >> info[i].second;
  }

  sort(a.begin(), a.end());
  sort(info.begin(), info.end(), cmp);
  long long ans = 0, ind = 0;
  for (int i = 0; i < n; ++i) {
    for (; ind < m; ++ind) {
      if (info[ind].first >= a[i]){
        break;
      }
    }
    ans += info[ind].second;
  }

  cout << ans;
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