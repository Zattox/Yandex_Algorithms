#include <iostream>

using std::cin, std::cout, std::min, std::max;

int main() {
  int n;
  double last, cur;
  double l = 30, r = 4000;
  std::string word;

  cin >> n >> last;
  for (int i = 1; i < n; ++i) {
    cin >> cur >> word;
    double m = (cur + last) / 2.0;

    if (word == "closer") {
      if (cur > last)
        l = max(m, l);
      if (cur < last)
        r = min(m, r);
    } else {
      if (cur < last)
        l = max(m, l);
      if (cur > last)
        r = min(m, r);
    }
    last = cur;
  }

  cout.precision(6);
  cout << std::fixed << l << ' ' << r;

  return 0;
}
