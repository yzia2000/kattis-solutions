#include <bits/stdc++.h>

using namespace::std;

struct pos {
    int x = 0;
    int y = 0;
    int z = 0;
};

int L, R, C;
bool inGrid(pos curr) {
    return curr.x >= 0 && curr.y >= 0 && curr.z >= 0
        && curr.x < C && curr.y < R && curr.z < L;
}

int main() {
    cin >> L >> R >> C;

    while (L != 0 || R != 0 || C != 0) {
        vector<vector<string>> grids;
        pos S, E;
        queue<pos> bfsqueues;
        int dist[C][R][L];
        for(int z = 0; z < L; z++) {
            vector<string>grid;
            for(int y = 0; y < R; y++) {
                string line; cin >> line;
                if (line.find('S') != string::npos) {
                    S.x = line.find('S');
                    S.y = y;
                    S.z = z;
                }
                if (line.find('E') != string::npos) {
                    E.x = line.find('E');
                    E.y = y;
                    E.z = z;
                }
                grid.push_back(line);

                for (int x = 0; x < C; x++) {
                    dist[x][y][z] = -2;
                }
            }
            grids.push_back(grid);
        }
        bfsqueues.push(S);
        dist[S.x][S.y][S.z] = 0;

        while(!bfsqueues.empty()) {
            pos curr = bfsqueues.front();
            bfsqueues.pop();
            for (int x = curr.x - 1; x <= curr.x + 1; x++) {
                pos next = curr;
                next.x = x;
                if (inGrid(next) && dist[next.x][next.y][next.z] == -2 && grids[next.z][next.y][next.x] != '#') {
                    dist[next.x][next.y][next.z] = dist[curr.x][curr.y][curr.z] + 1;
                    bfsqueues.push(next);
                }
            }
            for (int y = curr.y - 1; y <= curr.y + 1; y++) {
                pos next = curr;
                next.y = y;
                if (inGrid(next) && dist[next.x][next.y][next.z] == -2 && grids[next.z][next.y][next.x] != '#') {
                    dist[next.x][next.y][next.z] = dist[curr.x][curr.y][curr.z] + 1;
                    bfsqueues.push(next);
                }
            }

            for (int z = curr.z - 1; z <= curr.z + 1; z++) {
                pos next = curr;
                next.z = z;
                if (inGrid(next) && dist[next.x][next.y][next.z] == -2 && grids[next.z][next.y][next.x] != '#') {
                    dist[next.x][next.y][next.z] = dist[curr.x][curr.y][curr.z] + 1;
                    bfsqueues.push(next);
                }
            }
        }
        if (dist[E.x][E.y][E.z] < 0) {
            cout << "Trapped!" << endl;
        } else {
            cout << "Escaped in " << dist[E.x][E.y][E.z] << " minute(s)." << endl;
        }
        grids.clear();
        cin >> L >> R >> C;
    }
    return 0;
}
