#include <iostream>

using std::cin, std::cout;

int main(){
  const long long MAXN = 1000000;
  long long k1, m, k2, p2, n2;
  cin >> k1 >> m >> k2 >> p2 >> n2;

  long long ansN1 = -1, ansP1 = -1;
  for (long long cnt = 1; cnt <= MAXN; ++cnt) {
    long long flats = m * cnt;
    if (p2 == k2 / flats + (k2 % flats > 0)) {
      long long modK2 = k2 - (p2 - 1) * flats;
      if (n2 == modK2 / cnt + (modK2 % cnt > 0)) {
        long long p = k1 / flats + (k1 % flats > 0);
        long long modK1 = k1 - (p - 1) * flats;
        long long n = modK1 / cnt + (modK1 % cnt > 0);

        if (ansP1 != p && ansP1 != -1)
          ansP1 = 0;
        else if (ansP1 == -1)
          ansP1 = p;

        if (ansN1 != n && ansN1 != -1)
          ansN1 = 0;
        else if (ansN1 == -1)
          ansN1 = n;
      }
    }
  }

  cout << ansP1 << ' ' << ansN1;

  return 0;
}