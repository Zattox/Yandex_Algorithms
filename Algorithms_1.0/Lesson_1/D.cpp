#include <iostream>
#include <cmath>

using std::cin, std::cout;

int main(){
  int a, b, c;
  cin >> a >> b >> c;

  if (a == 0) {
    if (c * c == b) {
      cout << "MANY SOLUTIONS";
    } else {
      cout << "NO SOLUTION";
    }
  } else if (c < 0) {
    cout << "NO SOLUTION";
  } else {
    if ((c * c - b) % a == 0)
      cout << (c * c - b) / a;
    else
      cout << "NO SOLUTION";
  }

  return 0;
}