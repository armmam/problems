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
    if (n % 4 == 0) {
      cout << "YES\n";
    } else {
      cout << "NO\n"; 
    }
  }

  return 0;
}