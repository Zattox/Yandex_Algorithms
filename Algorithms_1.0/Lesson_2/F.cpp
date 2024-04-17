#include <iostream>
#include <vector>
#include <algorithm>

using std::cin, std::cout, std::vector, std::max;

bool check(vector<int> &arr){
  int n = arr.size();
  for (int i = 0; i < n / 2; ++i) {
    if (arr[i] != arr[n - i - 1]) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  vector<int> vec, ans;
  for (int cnt = 0; cnt <= n; ++cnt) {
    ans.clear();
    vec = arr;
    for (int j = cnt - 1; j >= 0; --j) {
      vec.push_back(arr[j]);
      ans.push_back(arr[j]);
    }
    if (check(vec)) {
      cout << ans.size() << "\n";
      for (auto el : ans) {
        cout << el << ' ';
      }
      break;
    }
  }

  return 0;
}
