#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
  for (int i = 0; i < t; ++i) {
    int a, b, sum, diff;
    cin >> a >> b;
    sum = 0;

    if (a < b) {
      diff = a;
      a = b;
      b = diff;
    }

    if (a - b > b) {
      sum += b;
      a -= 2 * b;
      b = 0;
    } else {
      sum += a - b;
      b -= a - b;
      a = b;
    }

    while ((a >= 2 || b >= 2) && (a >= 1 && b >= 1)) {
      if (a >= 300 && b >= 300) {
        a -= 300;
        b -= 300;
        sum += 200;
      } else {
        if (a > b) {
          a -= 2;
          b -= 1;
        } else {
          a -= 1;
          b -= 2;
        }
        ++sum;
      }
    }

    cout << sum << "\n";
  }

  return 0;
}
