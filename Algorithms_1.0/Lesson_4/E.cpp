#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

void solve() {
  int n;
  cin >> n;
  map<ll, vector<ll>> mp;

  for (int i = 0; i < n; ++i) {
    ll w, h;
    cin >> w >> h;
    mp[w].push_back(h);
  }

  ll ans = 0;
  for (auto el : mp) {
    ll maxi = *max_element(el.second.begin(), el.second.end());
    ans += maxi;
  }

  cout << ans;

}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();

  return 0;
}
