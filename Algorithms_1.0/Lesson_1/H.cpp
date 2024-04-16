#include <iostream>
#include <algorithm>

using std::cin, std::cout, std::min, std::max;

int main(){
  int a, b, n, m;
  cin >> a >> b >> n >> m;

  int min_ans = 1e9, max_ans = -1e9;
  int time_a = (n - 1) * a + n;
  int time_b = (m - 1) * b + m;
  min_ans = max(time_a, time_b);
  max_ans = min(time_a + 2 * a, time_b + 2 * b);

  if (min_ans > max_ans)
    cout << -1;
  else
    cout << min_ans << ' ' << max_ans;

  return 0;
}