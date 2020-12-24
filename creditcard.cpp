#include <bits/stdc++.h>

using namespace::std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n; cin >> n;

    while (n--) {
        double r, b, m; cin >> r >> b >> m;
        r /= 100;
        bool paid = false;
        for(int i = 1; i <= 1200; i++) {
            double interest = b * r;
            interest = round(interest * 100) / 100;
            b += interest;
            b = round(b * 100) / 100;
            b -= m;
            if (b < 0.001) {
                cout << i << endl;
                paid = true;
                break;
            }
        }
        if(!paid)cout << "impossible\n";
    }
    return 0;
}
