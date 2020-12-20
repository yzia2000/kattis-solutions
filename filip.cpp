#include <bits/stdc++.h>

using namespace::std;

int main(int argc, char *argv[])
{
    string n1, n2; cin >> n1 >> n2;
    for (int i = 2; i >= 0; i--) {
        if (n1[i] > n2[i]) {
            cout << n1[2] << n1[1] << n1[0] << endl;
            return 0;
        } else if (n1[i] < n2[i]) {
            cout << n2[2] << n2[1] << n2[0] << endl;
            return 0;
        }
    }
    cout << n1[2] << n1[1] << n1[0] << endl;
    return 0;
}
