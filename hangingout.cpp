#include <bits/stdc++.h>

using namespace::std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int peeps, lns;  cin >> peeps >> lns;
    int terrace = 0;
    int res = 0;
    while (lns--) {
        int pepe;
        string mov; cin >> mov >> pepe;
        if (mov[0] == 'e') {
            if (terrace + pepe > peeps) {
                res++;
            } else {
                terrace += pepe;
            }
        } else {
            terrace -= pepe;
            terrace = terrace < 0 ? 0 : terrace;
        }
    }

    cout << res << '\n';

    return 0;
}
