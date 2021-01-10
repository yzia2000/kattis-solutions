#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define ar array

#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

// binary search

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);



    while (true) {
        int num = 1; 
        string hint;
        bool isCheating = false;
        int hi = 10, lo = 1;
        cin >> num;
        cin >> hint >> hint;
        if (num == 0) {
            return 0;
        }
        while (hint != "on") {
            if (hint == "high") {
                hi = min(hi, num - 1);
            } else if (hint == "low") {
                lo = max(num + 1, lo);
            } else {
            }
            if (hi < lo) {
                isCheating = true;
            }
            cin >> num;
            cin >> hint >> hint;
        }
        if (num < lo || num > hi) {
            isCheating = true;
        }
        if (isCheating) {
            cout << "Stan is dishonest" << endl;
        } else {
            cout << "Stan may be honest" << endl;
        }
    }
    return 0;
}
