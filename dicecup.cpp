#include <bits/stdc++.h>

using namespace::std;

int main(int argc, char *argv[])
{
    int n, m; cin >> n >> m;

    if (m < n) {
        swap(n, m);
    }

    for (int i = n + 1; i < m + 2; i++) {
        cout << i << endl;
    }

    return 0;
}
