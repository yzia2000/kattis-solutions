#include <bits/stdc++.h>

using namespace::std;
int main () {
    int n; cin >> n;
    char prev = 'F';
    int marks = 0;
    while (n--) {
        char curr; cin >> curr;
        if (curr == prev) {
            marks++;
        }
        prev = curr;
    }
    cout << marks << endl;
    return 0;
}
