#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {
  ll n, k;
  cin >> n >> k;
  unordered_map<ll, ll> cnt;
  vector<ll> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    ++cnt[arr[i]];
  }
  sort(arr.begin(), arr.end());
  auto last = std::unique(arr.begin(), arr.end());
  arr.erase(last, arr.end());

  ll ans1 = 0;
  for (int i = 0; i < arr.size(); ++i) {
    auto it = lower_bound(arr.begin(), arr.end(), (arr[i] / k) + (arr[i] % k > 0));
    ll sz = i - (it - arr.begin());
    if (sz > 0) {
      ans1 += 3ll * sz * (sz - 1);
    }
  }
  ll ans2 = 0, ans3 = 0;
  for (int i = 0; i < arr.size(); ++i) {
    if (cnt[arr[i]] >= 2) {
      auto it_left = lower_bound(arr.begin(), arr.end(), (arr[i] / k) + (arr[i] % k > 0));
      ll sz = i - (it_left - arr.begin());
      if (sz > 0) {
        ans2 += 3ll * sz;
      }

      auto it_right = upper_bound(arr.begin(), arr.end(), arr[i] * k);
      sz = (it_right - arr.begin()) - i - 1;
      if (sz > 0) {
        ans2 += 3ll * sz;
      }
    }
    if (cnt[arr[i]] >= 3) {
      ++ans3;
    }
  }

  cout << ans1 + ans2 + ans3;
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
