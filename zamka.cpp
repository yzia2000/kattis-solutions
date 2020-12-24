#include <bits/stdc++.h>

using namespace::std;

int sumOfDigits(int num) {
    if (num != 0) {
        return num % 10 + (sumOfDigits(num / 10));
    } else {
        return 0;
    }
}

int main() {
    int L, D, X; cin >> L >> D >> X;
    int maxN = INT_MIN, minN = INT_MAX;
    for (int i = L; i <= D; i++) {
        if (sumOfDigits(i) == X) {
            maxN = max(maxN, i);
            minN = min(minN, i);
        }
    }
    cout << minN << endl;
    cout << maxN << endl;
    return 0;
}
