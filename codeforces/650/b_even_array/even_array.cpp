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
    int arr[n], swap = 0, odd = 0;
    for (int j = 0; j < n; ++j) {

      cin >> arr[j];
      if (arr[j] % 2 != j % 2) {
        ++swap;
      }
      if (arr[j] % 2 == 1) {
        ++odd;
      }
      
    }
    if (swap % 2 == 0 && odd == n / 2) {
      cout << swap / 2  << "\n";
    } else {
      cout << -1 << "\n";
    }
  }

  return 0;
}
