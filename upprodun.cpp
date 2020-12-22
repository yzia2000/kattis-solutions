#include <bits/stdc++.h>

using namespace::std;

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(NULL);

    int N, M; cin >> N >> M;
    int teamsInEachRoom = ceil(M / (double) N);
    int teamsInLastRoom = floor(M / (double) N);
    while(N-- > 1) {
        cout << string(teamsInEachRoom, '*') << '\n';
    }
    cout << string(teamsInLastRoom, '*') << '\n';
    return 0;
}
