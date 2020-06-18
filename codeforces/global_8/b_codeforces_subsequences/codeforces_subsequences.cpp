#include <iostream>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  unsigned long long k;
  cin >> k;
  int arr[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  int i = 0;
  unsigned long long total = 1, partial = 1;
  while (total < k) {
    ++arr[i];
    partial = partial / (arr[i] - 1) * arr[i];
    total = partial;
    i = (i + 1) % 10;
  }
  string reference = "codeforces";
  for (int i = 0; i < reference.size(); ++i) {
    for (int j = 0; j < arr[i]; ++j) {
      cout << reference[i];
    }
  }
  cout << "\n";

  return 0;
}
