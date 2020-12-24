#include <bits/stdc++.h>

using namespace::std;

bool inGrid(int x, int y, int r, int c) {
    return x >= 0 && y < r && y >= 0 && x < c;
}

int main () {
    int R, C; cin >> R >> C;
    char grid[C][R];
    bool visited[C][R];
    for (int j = 0; j < R; j++) {
        for (int i = 0; i < C; i++) {
            char ch; cin >> ch;
            grid[i][j] = ch;
            visited[i][j] = false;
        }
    }

    int time = 0;
    int x = 0, y = 0;

    while (grid[x][y] != 'T' && !visited[x][y]) {
        visited[x][y] = true;
        time++;
        switch (grid[x][y]) {
            case 'N':
                y--;
                break;
            case 'S':
                y++;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
        }

        if (!inGrid(x,y,R,C)) {
            cout << "Out" << endl;
            return 0;
        }
    }

    if (grid[x][y] == 'T') {
        cout << time << endl;
    } else {
        cout << "Lost" << endl;
    }
    return 0;
}
