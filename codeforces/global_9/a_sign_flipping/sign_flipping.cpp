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
    int arr[n];
    for (int j = 0; j < n; ++j) {
      cin >> arr[j];
    }
    for (int j = 0; j < n - 1; j += 2) {
      if (arr[j + 1] - arr[j] < 0) {
        arr[j] = arr[j] > 0 ? -1 * arr[j] : arr[j];
        arr[j + 1] = arr[j + 1] < 0 ? -1 * arr[j + 1] : arr[j + 1];
      }
    }
    for (int j = 1; j < n; j += 2) {
      if (arr[j + 1] - arr[j] > 0) {
        arr[j] = arr[j] < 0 ? -1 * arr[j] : arr[j];
        arr[j + 1] = arr[j + 1] > 0 ? -1 * arr[j + 1] : arr[j + 1];
      }
    }
    for (int j = 0; j < n; ++j) {
      cout << arr[j] << " ";
    }
    cout << "\n";
  }
  return 0;
}
