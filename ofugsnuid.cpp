#include <bits/stdc++.h>

using namespace::std;

void recurse(int n) {
    int num; cin >> num;

    if (n != 1) {
        recurse(n - 1);
    }
    cout << num << endl;
}

int main () {
    int n; cin >> n;
    recurse(n);
    return 0;
}
