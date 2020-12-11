#include <iostream>
using namespace std;
int main() {
    int n, v;
    long double sum{};
    cin >> n;
    for (int i = 0; i < n - 1; ++i) {
        cin >> v;
        sum += v;
    }
    long double s = ((double )n + 1) / 2;
    s *= (double )n;
    printf("%ld", (long)s - (long)sum);
    return 0;
}