#include <bits/stdc++.h>

using namespace::std;

int main(int argc, char *argv[])
{
    int X, N; cin >> X >> N;
    int cum = 0;
    while (N--) {
        int num; cin >> num;
        cum += X - num;
    }
    cout << cum + X << endl;
    return 0;
}
