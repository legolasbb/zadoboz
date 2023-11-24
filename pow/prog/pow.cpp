#include <iostream>
#include <queue>
#include <vector>

using namespace std;

/*Given a string s, find the first non-repeating character in it and return its
 * index. If it does not exist, return -1.*/

int main() {
  string s;
  cin >> s;
  vector<int> czy(26);
  queue<pair<char, int>> k;
  for (int i = 0; i < s.size(); i++) {
    if (czy[s[i] - 97] == 0) {
      k.push(make_pair(s[i], i));
    }
    czy[s[i] - 97]++;
  }
  int qs = k.size();
  for (int i = 0; i < qs; i++) {
    if (czy[k.front().first - 97] == 1) {
      cout << k.front().second;
      return 0;
    }
    k.pop();
  }
  cout << -1;
  return 0;
}