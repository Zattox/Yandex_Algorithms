#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<long long> arr(n), pref(n + 1);
  for(int i = 0; i < n; ++i) {
    cin >> arr[i];
    pref[i + 1] = pref[i] + arr[i];
  }

  int i = 0, j = 0, ans = 0;
  while (j < n) {
    long long sum = pref[j + 1] - pref[i];
    if (sum > k) {
      ++i;
      j = max(i, j);
    } else if (sum < k) {
      ++j;
    } else {
      ++ans;
      ++i;
      j = max(i, j);
    }
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
