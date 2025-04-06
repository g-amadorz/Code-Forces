#include <iostream>
#include <algorithm>

using namespace std;
void solve  () {
    int n;
    int k;
    string s;
    cin >> n >> k >> s;
    string r = s;
    reverse(r.begin(), r.end());

    if (s == r) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}