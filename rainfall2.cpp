#include <bits/stdc++.h>

using namespace::std;

int main() {
    double l, k, t1, t2, h; cin >> l >> k >> t1 >> t2 >> h;
    double maxH = h, minH = h;
    
    if (h >= l) {
        double b = h + t1 * k + t2 * k;
        double c = k * l * t1;
        maxH = (b + sqrt(b * b - 4 * c)) / 2.0;
        if (h > l) {
            minH = maxH;
        }
    }
    printf("%.6f %.6f\n", minH, maxH);

    return 0;
}
