#include <iostream>

using std::cin, std::cout;

int main(){
  int a, b, c;
  cin >> a >> b >> c;

  if (a + b > c && a + c > b && b + c > a) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}