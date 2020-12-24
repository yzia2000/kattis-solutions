#include <bits/stdc++.h>

using namespace::std;

bool inGrid(int currX, int currY) {
    return currX >= 0 && currY >= 0 && currX < 8 && currY < 8;
}

bool isBlack(int x, int y) {
    if (x % 2 == 0) {
        return y % 2 == 0;
    } else {
        return y % 2 != 0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n; cin >> n;

    while (n--) {
        char sx, ex;
        int startX, startY, endX, endY; cin >> sx >> startY >> ex >> endY;
        startX = sx - 'A', endX = ex - 'A';
        startY--;
        endY--;

        if (startX == endX && startY == endY) {
            cout << "0 " << (char)(startX + 'A') << " " << startY + 1 << '\n';
        } else if (isBlack(startX, startY) != isBlack(endX, endY)) {
            cout << "Impossible" << '\n';
        } else if (abs(startX - endX) == abs(startY - endY)) {
            cout << "1 " << (char)(startX + 'A') << " " << startY + 1 << " " << ex << " " << endY + 1 << '\n';
        } else {
            int x = ((startY + startX) - (endY - endX)) / 2;
            int y = x + (endY - endX);

            if (!inGrid(x, y)) {
                x = ((endY + endX) - (startY - startX)) / 2;
                y = x + (startY - startX);
            }
            cout << "2 " << (char)(startX + 'A') << " " << startY + 1 << " " << (char)(x + 'A') << " " << y + 1 << " " << ex << " " << endY + 1 << '\n';
        }
    }
    return 0;
}
