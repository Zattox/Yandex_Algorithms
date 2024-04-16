#include <iostream>
#include <algorithm>

using std::cin, std::cout, std::min, std::max, std::swap;

int main() {
  int a, b, c, d, e;

  cin >> a >> b >> c >> d >> e;

  int a1 = min({a, b, c});
  int c1 = max({a, b, c});
  int b1 = a + b + c - a1 - c1;
  int d1 = min(d,e), e1 = max(d, e);

  a = a1, b = b1, c = c1, d = d1, e = e1;

  if (a <= d && b <= e) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}