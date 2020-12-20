#include <bits/stdc++.h>

using namespace::std;

int main(int argc, char *argv[])
{
    int N, t; cin >> N >> t;
    int *A = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    switch (t) {
        case 1:
            cout << 7 << endl;
            break;
        case 2:
            if (A[0] > A[1]) {
                cout << "Bigger" << endl;
            } else if (A[0] < A[1]) {
                cout << "Smaller" << endl;
            } else {
                cout << "Equal" << endl;
            }
            break;
        case 3:
            {
                vector<int> firstThree = {A[0], A[1], A[2]};
                sort(firstThree.begin(), firstThree.end());
                cout << firstThree[1] << endl;
                break;
            }
        case 4:
            {
                int sum = 0;
                for (int i = 0; i < N; i++) {
                    sum += A[i];
                }
                cout << sum << endl;
            }
            break;
        case 5:
            {
                int sum = 0;
                for (int i = 0; i < N; i++) {
                    if (A[i] % 2 == 0) {
                        sum += A[i];
                    }
                }
                cout << sum << endl;
            }
            break;
        case 6:
            {
                for (int i = 0; i < N; i++) {
                    cout << (char) ((A[i] % 26) + 'a');
                }
                cout << endl;
            }
            break;
        case 7:
            {
                int i = 0, steps = 0;
                while (steps <= N+1) {
                    i = A[i];
                    steps += 1;
                    if (i == N-1) {
                        cout << "Done" << endl;
                        break;
                    }
                    else if( i < 0 or i >= N) {
                        cout << "Out" << endl;
                        break;
                    }
                    else if (steps == N) {
                        cout << "Cyclic" << endl;
                        break;
                    }
                }
            }
    }
    return 0;
}
