#include <bits/stdc++.h>

using namespace::std;

struct pos {
    int x;
    int y;
};

int returnIndex(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + '9' - '0' + 1;
    } else if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + returnIndex('z') + 1;
    }
    return ch - '0';

}

int main() {
    string line;

    map<int, pos> coords;
    vector<string> grids;
    int row = 0;
    int numCoords = 0;

    while(getline(cin, line)) {
        grids.push_back(line);

        for (int i = 0; i < line.length(); i++) {
            if (line[i] != '.') {
                coords[returnIndex(line[i])] = {i, row};
                numCoords++;
            }
        }

        row++;
        if (line == "") {
            for (int i = 0; i < numCoords - 1; i++) {
                if (coords[i].x == coords[i + 1].x) {
                    int x = coords[i].x;
                    int minY = min(coords[i].y, coords[i + 1].y);
                    int maxY = max(coords[i].y, coords[i + 1].y);
                    minY++;
                    maxY--;
                    for (int y = minY; y <= maxY; y++) {
                        if (grids[y][x] == '.') {
                            grids[y][x] = '|';
                        } else {
                            if (grids[y][x] == '-') {
                                grids[y][x] = '+';
                            }
                        }
                    }
                } else {
                    int y = coords[i].y;
                    int minX = min(coords[i].x, coords[i + 1].x);
                    int maxX = max(coords[i].x, coords[i + 1].x);
                    minX++;
                    maxX--;
                    for (int x = minX; x <= maxX; x++) {
                        if (grids[y][x] == '.') {
                            grids[y][x] = '-';
                        } else {
                            if (grids[y][x] == '|') {
                                grids[y][x] = '+';
                            }
                        }
                    }
                }
            }
            for (string str : grids) {
                cout << str << endl;
            }
            row = 0, numCoords = 0;
            grids.clear();
            coords.clear();
        }

    }

    for (int i = 0; i < numCoords - 1; i++) {
        if (coords[i].x == coords[i + 1].x) {
            int x = coords[i].x;
            int minY = min(coords[i].y, coords[i + 1].y);
            int maxY = max(coords[i].y, coords[i + 1].y);
            minY++;
            maxY--;
            for (int y = minY; y <= maxY; y++) {
                if (grids[y][x] == '.') {
                    grids[y][x] = '|';
                } else {
                    if (grids[y][x] == '-') {
                        grids[y][x] = '+';
                    }
                }
            }
        } else {
            int y = coords[i].y;
            int minX = min(coords[i].x, coords[i + 1].x);
            int maxX = max(coords[i].x, coords[i + 1].x);
            minX++;
            maxX--;
            for (int x = minX; x <= maxX; x++) {
                if (grids[y][x] == '.') {
                    grids[y][x] = '-';
                } else {
                    if (grids[y][x] == '|') {
                        grids[y][x] = '+';
                    }
                }
            }
        }
    }
    for (string str : grids) {
        cout << str << endl;
    }
    return 0;
}
