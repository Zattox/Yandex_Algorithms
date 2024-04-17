#include <iostream>
#include <vector>
#include <algorithm>

using std::cin, std::cout, std::vector, std::min, std::max;

int main() {
  int indmini = -1, indmaxi = -1, ind = 0;
  long long x, maxi = -2e9, mini = 2e9;
  vector<long long> arr;

  while (cin >> x) {
    arr.push_back(x);
    if (maxi < x) {
      maxi = x;
      indmaxi = ind;
    }
    if (mini > x) {
      mini = x;
      indmini = ind;
    }
    ++ind;
  }

  long long ans_with_maxi = -2e9, ans_with_mini = -2e9;
  long long xmax = maxi, ymax, xmin = mini, ymin;
  for (int i = 0; i < arr.size(); ++i) {
    if (indmaxi != i) {
      if (ans_with_maxi < maxi * arr[i]) {
        ans_with_maxi = maxi * arr[i];
        ymax = arr[i];
      }
    }
    if (indmini != i) {
      if (ans_with_mini < mini * arr[i]) {
        ans_with_mini = mini * arr[i];
        ymin = arr[i];
      }
    }
  }

  if (ans_with_maxi > ans_with_mini) {
    cout << min(xmax, ymax) << ' ' << max(xmax, ymax);
  } else {
    cout << min(xmin, ymin) << ' ' << max(xmin, ymin);
  }

  return 0;
}
