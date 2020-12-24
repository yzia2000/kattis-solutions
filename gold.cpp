#include <bits/stdc++.h>

using namespace::std;

struct pos {
    int x;
    int y;
};

int c, r;

int dfs(vector<string> &grid, vector<vector<bool>> visited, pos curr, int g) {
    if (grid[curr.y][curr.x] == '#' || 
            grid[curr.y + 1][curr.x] == 'T' || 
            grid[curr.y - 1][curr.x] == 'T' || 
            grid[curr.y][curr.x + 1] == 'T' || 
            grid[curr.y][curr.x - 1] == 'T' || 
            visited[curr.y][curr.x]) {
        return g;
    }
    visited[curr.y][curr.x] = true;

    if (grid[curr.y][curr.x] == 'G') {
        g++;
    }

    int one = dfs(grid, visited, {curr.x + 1, curr.y}, g);
    int two = dfs(grid, visited, {curr.x - 1, curr.y}, g);
    int three = dfs(grid, visited, {curr.x, curr.y + 1}, g);
    int four = dfs(grid, visited, {curr.x, curr.y - 1}, g);
    return max(max(max(one, two), three), four);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> c >> r;

    pos st;

    vector<string> grid;
    vector<vector<bool>> visited;

    for (int i = 0; i < r; i++) {
        string line; cin >> line;
        grid.push_back(line);
        visited.push_back(vector<bool>(c, false));
        for (int j = 0; j < c; j++) {
            if (line[j] == 'P') {
                st = {j, i};
            }
        }
    }

    cout << dfs(grid, visited, st, 0) << endl;
    return 0;
}
