#include <bits/stdc++.h>

using namespace::std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n; cin >> n;
    deque<int> teqLeft, teqRight;

    while (n--) {
        string str; cin >> str;
        int num; cin >> num;

        if (str == "push_back") {
            teqRight.push_back(num);
            if (teqRight.size() > teqLeft.size()) {
                teqLeft.push_back(teqRight.front());
                teqRight.pop_front();
            }
        } else if (str == "push_front") {
            teqLeft.push_front(num);
            if (teqLeft.size() > teqRight.size() + 1) {
                teqRight.push_front(teqLeft.back());
                teqLeft.pop_back();
            }
        } else if (str == "push_middle") {
            teqRight.push_front(num);
            if (teqRight.size() > teqLeft.size()) {
                teqLeft.push_back(teqRight.front());
                teqRight.pop_front();
            }
        } else if (str == "get") {
            if (num < (int)teqLeft.size()) {
                cout << teqLeft[num] << '\n';
            } else {
                cout << teqRight[num - teqLeft.size()] << '\n';
            }
        }
    }
    return 0;
}
