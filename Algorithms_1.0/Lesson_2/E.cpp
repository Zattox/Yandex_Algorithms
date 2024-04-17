#include <iostream>
#include <vector>
#include <algorithm>

using std::cin, std::cout, std::vector, std::max;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int maxi = *std::max_element(arr.begin(), arr.end());
  int cnt_maxi = 0, result = -1;
  for (int i = 0; i < n; ++i) {
    if (arr[i] % 10 == 5 && i < n - 1 && cnt_maxi > 0) {
      if (arr[i] > arr[i + 1]) {
        result = max(arr[i], result);
      }
    }
    if (arr[i] == maxi) {
      ++cnt_maxi;
    }
  }

  if (result == -1) {
    cout << 0;
    return 0;
  }

  std::sort(arr.rbegin(), arr.rend());
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] > result) {
      ++ans;
    }
  }

  cout << ans + 1;

  return 0;
}
