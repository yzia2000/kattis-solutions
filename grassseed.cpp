#include <bits/stdc++.h>

using namespace::std;

int main(int argc, char *argv[])
{
    double cost; 
    int n;
    cin >> cost >> n;
    double sum = 0.0;
    while (n--) {
        double w, l; cin >> w >> l;
        sum += w * l * cost;
    }
    printf("%0.7f\n", sum);
    return 0;
}
