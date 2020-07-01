#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int n;
    cin >> n;
    if (n % 2 == 1) {
      cout << n / 2 + 1;
    } else {
      cout << n / 2;
    }
    cout << "\n";
  }

  return 0;
}
