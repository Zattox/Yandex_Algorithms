#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

void solve() {
  int n, r;
  cin >> n >> r;
  vector<long long> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  long long i = 0, j = 1, ans = 0;
  while (j < n) {
    if (arr[j] - arr[i] > r) {
      ans += n - j;
      ++i;
    } else {
      ++j;
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
