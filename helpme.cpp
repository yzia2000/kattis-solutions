#include <bits/stdc++.h>

using namespace std;

string sequence = "kqrbnp";

struct pos {
    char piece;
    int row;
    char col;


    bool operator<(const pos& b) const {
        bool isBlack = islower(piece);
        int locA = int(sequence.find(tolower(piece)));
        int locB = int(sequence.find(tolower(b.piece)));

        if (locA == locB) {
            if (row == b.row) {
                return col < b.col;
            }
            if (isBlack) {
                return row > b.row;
            }
            return row < b.row;
        }
        return locA < locB;
    }

    string toString() const {
        if (tolower(piece) == 'p') {
            return col + to_string(row);
        }
        return (char)toupper(piece) + (col + to_string(row));
    }
};

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
    string line;
    int row = 8;
    vector<pos> whitepos;
    vector<pos> blackpos;

    while (getline(cin, line)) {
        if (line[0] == '+') {
            continue;
        }

        char col = 'a' - 1;
        for (char linechar : line) {
            if (linechar == '|') {
                col++;
                continue;
            }

            for (char piece : sequence) {
                if (linechar == piece) {
                    blackpos.push_back({piece, row, col});
                }
            }

            for (char piece : sequence) {
                piece = toupper(piece);
                if (linechar == piece) {
                    whitepos.push_back({piece, row, col});
                }
            }
        }
        row--;
    }

    sort(blackpos.begin(), blackpos.end());
    sort(whitepos.begin(), whitepos.end());

    string output = "White: ";

    for (pos p : whitepos) {
        output += p.toString() + ",";
    }

    cout << output.substr(0, output.length() - 1) << endl;

    output = "Black: ";
    for (pos p : blackpos) {
        output += p.toString() + ",";
    }

    cout << output.substr(0, output.length() - 1) << endl;

    return 0;
}
