#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int l = 0, r = 0, ch = 1;
  int ans_l = -1e9, ans_r = 1e9;
  vector<int> cnt(k + 1);
  ++cnt[arr[0]];
  while (r + 1 < n || ch == k) {
    if (ch == k) {
      if (ans_r - ans_l + 1 > r - l + 1) {
        ans_l = l;
        ans_r = r;
      }
      if (cnt[arr[l]] == 1) {
        --ch;
      }
      --cnt[arr[l]];
      ++l;
    } else if (r + 1 < n) {
      ++r;
      if (cnt[arr[r]] == 0) {
        ++ch;
      }
      ++cnt[arr[r]];
    }
    r = max(l, r);
  }

  cout << ans_l + 1 << ' ' << ans_r + 1;

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
