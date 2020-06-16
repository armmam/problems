#include <iostream>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    string b;
    cin >> b;
    string a(b.size() - b.size() / 2 + 1, ' ');
    for (int j = 0; j < b.size(); j += 2) {
      a[j / 2] = b[j];
    }
    a[a.size() - 1] = b[b.size() - 1];
    cout << a << "\n";
  }

  return 0;
}
