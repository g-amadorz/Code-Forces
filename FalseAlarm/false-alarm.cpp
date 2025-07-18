#include <iostream>
using namespace std;

void solve() {
  int n, x, d;
  bool b = false;
  cin >> n;
  cin >> x;
  bool check = false;

  while (n--) {
    cin >> d;
    if (b) {
      x--;
    }
    if (d == 1) {
      if (x > 1) {
        check = true;
      }
      b = true;
    }
  }

  if (check) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
