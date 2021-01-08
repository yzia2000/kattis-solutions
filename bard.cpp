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

    int N, E; cin >> N >> E;

    int songs = 0;
    map<int, int> knownSongs;

    for (int i = 2; i <= N; i++) {
        knownSongs[i] = 0;
    }

    while (E--) {
        int num; cin >> num;
        while (num--) {
            int villager; cin >> villager;
            if (villager == 1) {
                songs++;
            } else {
                knownSongs[villager] = songs;
            }
        }
    }

    cout << songs << endl;

    cout << 1 << endl;

    for (int i = 2; i <= N; i++) {
        if (knownSongs[i] == songs) {
            cout << i << endl;
        }
    }

    return 0;
}
