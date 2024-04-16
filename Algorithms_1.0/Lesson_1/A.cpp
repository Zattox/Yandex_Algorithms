#include <iostream>

using std::cin, std::cout;

int main() {
  int tR, tC;
  std::string mode;
  cin >> tR >> tC >> mode;

  int ans;
  if (mode == "freeze") {
    ans = std::min(tR, tC);
  } else if (mode == "heat") {
    ans = std::max(tR, tC);
  } else if (mode == "auto") {
    ans = tC;
  } else if (mode == "fan") {
    ans = tR;
  }

  cout << ans;

  return 0;
}
