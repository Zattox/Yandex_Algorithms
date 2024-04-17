#include <iostream>
#include <vector>
#include <cmath>

using std::cin, std::cout, std::vector;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  int x;
  cin >> x;

  int mini = 2e9, ans = 2e9;
  for (int i = 0; i < n; ++i) {
    if (abs(x - arr[i]) < mini) {
      mini = abs(x - arr[i]);
      ans = arr[i];
    }
  }

  cout << ans;

  return 0;
}
