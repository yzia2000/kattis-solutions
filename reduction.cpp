#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define ar array

#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

int main() {
    int n; cin >> n;

    while (n--) {
        int N, M, L;
        scanf("%d %d %d", &N, &M, &L);
        for (int i = 0; i < L; i++) {
            char agency[16];
            int A, B;
            char sep;
            scanf("%[^:]s%d,%d", agency, &A, &B);
            printf("%s %d %d\n", agency, A, B);
        }
    }
    return 0;
}
