#include <iostream>
#include <vector>

using std::cin, std::cout, std::vector;

int main() {
  int x;
  vector<int> arr;
  while (cin >> x) {
    arr.push_back(x);
  }

  int ans = 0;
  for (int i = 1; i < arr.size() - 1; ++i) {
    if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
      ++ans;
    }
  }

  cout << ans;

  return 0;
}
