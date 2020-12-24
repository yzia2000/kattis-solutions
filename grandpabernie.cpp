#include <bits/stdc++.h>

using namespace::std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n; cin >> n;
    map<string, vector<int>> cunts;
    map<string, bool> sorted;

    while (n--) {
        string ct;
        int yr;
        cin >> ct >> yr;
        cunts[ct].push_back(yr);
    }
    
    int k; cin >> k;

    while (k--) {
        string ct;
        int id;
        cin >> ct >> id;
        if (!sorted[ct]) {
            vector<int> yrs = cunts[ct];
            sort(yrs.begin(), yrs.end());
            cunts[ct] = yrs;
            sorted[ct] = true;
        } 
        cout << cunts[ct][id - 1] << '\n';
    }

    return 0;
}
