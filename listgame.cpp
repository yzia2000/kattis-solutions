#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define ar array

#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int X; cin >> X;
    int k = 0;
    
    int i = 2;

    while (i * i  <= X) {
        if (X % i == 0) {
            X /= i;
            k++;

        } else {
            i++;
        }
    }
    cout << k + 1 << endl;

    return 0;
}
