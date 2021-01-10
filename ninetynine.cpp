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

    int x = 2;
    bool programTurn = false;

    cout << x << endl;

    while(x < 97) {
        if (programTurn) {
            if ((x + 1) % 3 == 0) {
                x += 1;
            } else if ((x + 2) % 3 == 0) {
                x += 2;
            } else {
                x += 1;
            }
            cout << x << endl;
        } else {
            int userInput;
            cin >> userInput;
            x = userInput;
        }
        programTurn = !programTurn;
    }

    if (programTurn) {
        cout << 99 << endl;
    } else {
        int userInput; cin >> userInput;
    }

    return 0;
}
