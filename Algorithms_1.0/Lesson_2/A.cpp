#include <iostream>

using std::cin, std::cout;

int main() {
  int num, last;
  cin >> last;
  while (cin >> num) {
    if (num > last) {
      last = num;
    } else {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";
  return 0;
}
