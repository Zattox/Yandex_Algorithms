#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

string to_lower(string str) {
  string res;
  for (int i = 0; i < str.size(); ++i) {
    res += char(tolower(str[i]));
  }
  return res;
}

void solve() {
  int n;
  string c, d;
  cin >> n >> c >> d;

  set<string> dict;
  for (int i = 0; i < n; ++i) {
    string word;
    cin >> word;
    if (c == "no") {
      word = to_lower(word);
    }
    dict.insert(word);
  }

  int ch = 0;
  map<string, int> indx;
  map<string, int> mp;
  string line;
  while (getline(cin, line)) {
    int i = 0;
    while (i < line.size()) {
      string word;
      while (i < line.size() && (line[i] == '_' || (!ispunct(line[i]) && !isspace(line[i])))) {
        word += line[i];
        ++i;
      }
      if (!word.empty()) {
        if (c == "no") {
          word = to_lower(word);
        }
        if (d == "yes" || !isdigit(word[0])) {
          if (dict.count(word) == 0 && !(word.size() == 1 && isdigit(word[0]))) {
            if (mp[word] == 0) {
              indx[word] = ch;
              ++ch;
            }
            mp[word]++;
          }
        }
      }
      ++i;
    }
  }

  int maxi = -1;
  string ans = "-1";
  for (auto el : mp) {
    if (el.second > maxi) {
      maxi = el.second;
      ans = el.first;
    }
    if (el.second == maxi && indx[el.first] < indx[ans]) {
      ans = el.first;
    }
  }

  if (ans == "-1") {
    exit(1230123);
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
