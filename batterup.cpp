#include <bits/stdc++.h>

using namespace::std;

int main () {
    int n; cin >> n;
    int ns = 0;
    double average = 0.0;
    while (n--) {
        int num; cin >> num;
        if (num >= 0) {
            ns++;
            average += num;
        }
    }
    printf("%.17g\n", average / ns);
    return 0;
}
