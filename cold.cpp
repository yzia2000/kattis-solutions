#include <bits/stdc++.h>

using namespace::std;

int main(int argc, char *argv[])
{
    int n; cin >> n;
    int days = 0;
    while (n--) {
        int temp; cin >> temp;
        if (temp < 0) {
            days++;
        }
    }
    cout << days << endl;
    return 0;
}
