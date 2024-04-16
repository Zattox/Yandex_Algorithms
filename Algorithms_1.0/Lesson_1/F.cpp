#include <iostream>
#include <algorithm>

using std::cin, std::cout, std::max, std::min;

int main(){
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  int s1 = 2 * (x1 + x2) * max(y1, y2);
  int s2 = 2 * (y1 + y2) * max(x1, x2);
  int s3 = 2 * (x1 + y2) * max(y1, x2);
  int s4 = 2 * (y1 + x2) * max(x1, y2);

  if (min({s1, s2, s3, s4}) == s1) {
    cout << x1 + x2 << ' ' << max(y1, y2);
  } else if (min({s1, s2, s3, s4}) == s2) {
    cout << y1 + y2 << ' ' << max(x1, x2);
  } else if (min({s1, s2, s3, s4}) == s3) {
    cout << x1 + y2 << ' ' << max(y1, x2);
  } else {
    cout << y1 + x2 << ' ' << max(x1, y2);
  }

  return 0;
}