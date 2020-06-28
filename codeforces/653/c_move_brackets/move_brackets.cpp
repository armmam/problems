#include <iostream>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int n, moves = 0, count = 0;
    cin >> n;
    string s;
    cin >> s;
    for (char c : s) {
      if (c == '(') {
        ++count;
      } else {
        --count;
      }
      if (count < 0) {
        ++count;
        ++moves;
      }
    }
    cout << moves << "\n";
  }

  return 0;
}
