#include <bits/stdc++.h>

using namespace::std;

int main(int argc, char *argv[])
{
    int n; char suitB; cin >> n >> suitB;
    n *= 4;
    int sum = 0;
    while (n--) {
        char num; char suit; cin >> num >> suit;
        switch (num) {
            case 'A':
                sum += 11;
                break;
            case 'K':
                sum += 4;
                break;
            case 'Q':
                sum += 3;
                break;
            case 'J':
                sum += suit == suitB ? 20 : 2;
                break;
            case 'T':
                sum += 10;
                break;
            case '9':
                sum += suit == suitB ? 14 : 0;
                break;
            default:
                break;
        }
    }
    cout << sum << endl;
    return 0;
}
