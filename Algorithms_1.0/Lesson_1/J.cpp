#include <iostream>

using std::cin, std::cout;

int main() {
  double a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0) {
    cout << 5;
  } else if (a * d == b * c && a * f != c * e) {
    cout << 0;
  } else if (a == 0 && b == 0 && e != 0) {
    cout << 0;
  } else if (c == 0 && d == 0 && f != 0) {
    cout << 0;
  } else if (a == 0 && c == 0 && b * f != d * e) {
    cout << 0;
  } else if (b == 0 && d == 0 && a * f != c * e) {
    cout << 0;
  } else if (a * d == b * c && a * f == c * e) {
    if (b == 0 && d == 0) {
      if (a != 0 && c != 0) {
        cout << 3 << ' ' << e / a;
      } else if (a == 0) {
        if (e == 0) {
          cout << 3 << ' ' << f / c;
        }
      } else if (c == 0) {
        if (f == 0) {
          cout << 3 << ' ' << e / a;
        }
      }
    } else if (a == 0 && c == 0) {
      if (b != 0) {
        cout << 4 << ' ' << e / b;
      } else if (d != 0) {
        cout << 4 << ' ' << f / d;
      }
    } else if (b != 0) {
      cout << 1 << ' ' << -a / b << ' ' << e / b;
    } else if (d != 0) {
      cout << 1 << ' ' << -c / d << ' ' << f / d;
    }
  } else {
    double x = (e * d - b * f) / (a * d - b * c);
    double y = (a * f - e * c) / (a * d - b * c);
    cout << 2 << ' ' << x << ' ' << y;
  }

  return 0;
}