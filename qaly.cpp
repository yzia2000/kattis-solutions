#include <bits/stdc++.h>

using namespace::std;

int main() {
    int n; cin >> n;
    
    double cum = 0;
    while (n--) {
        double ql, qt; cin >> ql >> qt;
        cum += ql * qt;
    }
    printf("%0.3f", cum);
    return 0;
}
