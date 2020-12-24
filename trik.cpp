#include <bits/stdc++.h>

using namespace::std;

int main() {
    string line; cin >> line;
    bool ball[] = {true, false, false};
    for (char ch : line) {
        if (ch == 'A') {
            swap(ball[0], ball[1]);
        } else if (ch == 'B') {
            swap(ball[1], ball[2]);
        } else {
            swap(ball[0], ball[2]);
        }
    }

    if (ball[0]) {
        cout << "1" << endl;
    } else if (ball[1]) {
        cout << "2" << endl;
    } else {
        cout << "3" << endl;
    }
    return 0;
}
