#include <bits/stdc++.h>

using namespace::std;

int main(int argc, char *argv[])
{
    int n; cin >> n;
    int sum = 0;
    while (n--) {
        int num; cin >> num;
        sum += pow(num / 10, num % 10);
    }
    cout << sum << endl;
    return 0;
}
