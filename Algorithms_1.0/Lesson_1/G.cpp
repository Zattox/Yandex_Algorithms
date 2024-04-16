#include <iostream>

using std::cin, std::cout;

int main(){
  int n, k, m, ans = 0;
  cin >> n >> k >> m;

  while (n >= k) {
    int cnt = n / k;
    ans += cnt * (k / m);
    int n1 = n % k + cnt * (k % m);
    if (n1 == n){
      break;
    }
    n = n1;
  }

  cout << ans;

  return 0;
}