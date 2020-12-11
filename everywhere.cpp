#include <bits/stdc++.h>

using namespace::std;

int main(int argc, char *argv[])
{

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        set<string> countries;
        while (n--) {
            string country; cin >> country;
            countries.insert(country);
        }
        cout << countries.size() << endl;
    }

    return 0;
}
