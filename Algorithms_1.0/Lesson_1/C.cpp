#include <iostream>
#include <string>

using std::cin, std::cout;

int main(){
  std::string phone[4];
  cin >> phone[0] >> phone[1] >> phone[2] >> phone[3];

  for (int i = 0; i < 4; ++i){
    std::string cur = phone[i], res;
    for (int j = 0; j < cur.size(); ++j) {
      if (cur[j] >= '0' && cur[j] <= '9') {
        res += cur[j];
      }
    }
    if (res.size() == 7) {
      res = res.insert(0, "8");
    }
    if (res.size() == 8) {
      res = res.insert(1, "495");
    }
    res[0] = '8';
    phone[i] = res;
  }

  for (int i = 1; i < 4; ++i) {
    if (phone[0] == phone[i]) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}