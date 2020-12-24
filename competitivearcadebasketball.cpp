#include <bits/stdc++.h>

using namespace::std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n, p, m; cin >> n >> p >> m;
    map<string, int> points;
    bool won = false;

    for (int i = 0; i < n; i++) {
        string name; cin >> name;
        points[name] = 0;
    }

    while(m--) {
        string name;
        int pp;
        cin >> name >> pp;

        if (points[name] != -1) {
            points[name] += pp;
            if (points[name] >= p) {
                cout << name << " wins!" << '\n';
                points[name] = -1;
                won = true;
            }
        }
    }

    if (!won) {
        cout << "No winner!" << '\n';
    }
    return 0;
}
