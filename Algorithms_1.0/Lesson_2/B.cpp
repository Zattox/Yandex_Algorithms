#include <iostream>
#include <vector>

using std::cin, std::cout, std::vector;

int main() {
  int num, n = 0;
  vector<int> arr;

  while (cin >> num) {
    if (num == -2e9) {
      break;
    }
    arr.push_back(num);
    ++n;
  }

  vector<bool> flag(5, true);
  for (int i = 1; i < n; ++i) {
    if (arr[i - 1] != arr[i])
      flag[0] = false;

    if (arr[i - 1] >= arr[i])
      flag[1] = false;

    if (arr[i - 1] > arr[i])
      flag[2] = false;

    if (arr[i - 1] <= arr[i])
      flag[3] = false;

    if (arr[i - 1] < arr[i])
      flag[4] = false;
  }

  if (flag[0]) {
    cout << "CONSTANT";
  } else if (flag[1]) {
    cout << "ASCENDING";
  } else if (flag[2]) {
    cout << "WEAKLY ASCENDING";
  } else if (flag[3]) {
    cout << "DESCENDING";
  } else if (flag[4]) {
    cout << "WEAKLY DESCENDING";
  } else {
    cout << "RANDOM";
  }

  return 0;
}
