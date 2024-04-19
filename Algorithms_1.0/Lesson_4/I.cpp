#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;



void solve() {
  int n;
  cin >> n;
  unordered_map<string, unordered_set<int>> dict;
  for (int i = 0; i < n; ++i) {
    string word, lower_word;
    cin >> word;
    int ind = -1;
    for (int j = 0; j < word.size(); ++j) {
      if (word[j] == toupper(word[j])) {
        ind = j;
      }
      lower_word += char(tolower(word[j]));
    }
    dict[lower_word].insert(ind);
  }

  int ans = 0;
  string word;
  while (cin >> word) {
    int ind = -1;
    bool flag = true;
    string lower_word;

    for (int j = 0; j < word.size(); ++j) {
      if (word[j] == toupper(word[j])) {
        if (ind != -1) {
          flag = false;
        }
        ind = j;
      }
      lower_word += char(tolower(word[j]));
    }

    if (!flag || ind == -1 || (dict.find(lower_word) != dict.end() && dict[lower_word].count(ind) == 0)) {
      ++ans;
    }
  }

  cout << ans;

}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  solve();

  return 0;
}
