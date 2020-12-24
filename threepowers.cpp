#include <bits/stdc++.h>

using namespace::std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    long long n; cin >> n;
    unsigned long long int some = 717897987691852588770249;


    while (n) {
        n -= 1;
        vector<unsigned long long int> nums;
        unsigned long long int curr = 1;
        while (n) {
            if (n % 2 == 1) {
                nums.push_back(curr);
            }
            curr *= 3;
            n /= 2;
        }
        long long len = nums.size();
        cout << "{";
        for (long long i = 0; i < len; i++) {
            cout << " " << nums[i];
            if (i != len - 1) {
                cout << ",";
            }
        }
        cout << " }\n";
        cin >> n;
    }

    return 0;
}
