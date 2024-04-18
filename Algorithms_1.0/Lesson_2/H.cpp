#include <iostream>
#include <vector>
#include <algorithm>

using std::cin, std::cout, std::vector, std::min, std::max;

bool check (int m, int i, vector<int> &arr) {
  if (m == 0)
    return arr[1] != i && arr[2] != i;
  if (m == 1)
    return arr[0] != i && arr[2] != i;
  if (m == 2)
    return arr[0] != i && arr[1] != i;
}

int main() {
  int x, n = 0;
  vector<long long> arr;
  vector<int> indmini = {-1, -2, -3}, indmaxi = {-1, -2, -3};

  while (cin >> x) {
    arr.push_back(x);
    ++n;
  }

  for (int m = 0; m < 3; ++m) {
    for (int i = 0; i < n; ++i) {
      if (check(m, i, indmaxi) && (indmaxi[m] < 0 || arr[indmaxi[m]] < arr[i])) {
        indmaxi[m] = i;
      }
      if (check(m, i, indmini) && (indmini[m] < 0 || arr[indmini[m]] > arr[i])) {
        indmini[m] = i;
      }
    }
  }

  long long sum1 = arr[indmaxi[0]] * arr[indmaxi[1]] * arr[indmaxi[2]];
  //cout << arr[indmaxi[0]] << ' ' <<  arr[indmaxi[1]] << ' ' << arr[indmaxi[2]] << "\n";
  long long sum2 = arr[indmaxi[0]] * arr[indmini[0]] * arr[indmini[1]];
  //cout << arr[indmini[0]] << ' ' <<  arr[indmini[1]] << ' ' << arr[indmini[2]] << "\n";

  if (sum1 > sum2) {
    cout << arr[indmaxi[0]] << ' ' <<  arr[indmaxi[1]] << ' ' << arr[indmaxi[2]];
  } else {
    cout << arr[indmaxi[0]] << ' ' <<  arr[indmini[0]] << ' ' << arr[indmini[1]];
  }

  return 0;
}
