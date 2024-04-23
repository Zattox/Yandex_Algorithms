#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

void solve() {
  int n, k;
  string str;
  cin >> n >> k >> str;

  int maxi = 1, l = 0, r = 0;
  int ind = 0;
  unordered_map<char, int> cnt;
  ++cnt[str[r]];
  while (r + 1 < n) {
    ++r;
    if (cnt[str[r]] + 1 <= k) {
      ++cnt[str[r]];
      if (maxi < r - l + 1) {
        maxi = r - l + 1;
        ind = l;
      }
    } else {
      while (cnt[str[r]] >= k) {
        --cnt[str[l]];
        ++l;
      }
      ++cnt[str[r]];
      if (maxi < r - l + 1) {
        maxi = r - l + 1;
        ind = l;
      }
    }
  }
  if (maxi < r - l + 1) {
    maxi = r - l + 1;
    ind = l;
  }

  cout << maxi << ' ' << ind + 1;
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
