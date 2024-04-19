#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

void deposit(unordered_map<string, ll> &bank){
  ll sum;
  string name;
  cin >> name >> sum;
  bank[name] += sum;
}

void withdraw(unordered_map<string, ll> &bank) {
  ll sum;
  string name;
  cin >> name >> sum;
  bank[name] -= sum;
}

void transfer(unordered_map<string, ll> &bank){
  ll sum;
  string name1, name2;
  cin >> name1 >> name2 >> sum;
  bank[name1] -= sum;
  bank[name2] += sum;
}

void balance(unordered_map<string, ll> &bank) {
  string name;
  cin >> name;
  if (bank.find(name) != bank.end()) {
    cout << bank[name] << "\n";
  } else {
    cout << "ERROR\n";
  }
}

void income(unordered_map<string, ll> &bank) {
  ll p;
  cin >> p;
  for (auto &el : bank) {
    if (el.second > 0) {
      el.second = el.second * (1 + p / 100.0);
    }
  }
}

void solve() {
  unordered_map<string, ll> bank;
  string comand;
  while (cin >> comand) {
    if (comand == "DEPOSIT")
      deposit(bank);
    if (comand == "WITHDRAW")
      withdraw(bank);
    if (comand == "BALANCE")
      balance(bank);
    if (comand == "TRANSFER")
      transfer(bank);
    if (comand == "INCOME")
      income(bank);
  }
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
