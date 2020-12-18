#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int x) {
    if (x <= 3) return x > 1;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (int i = 5; pow(i,2) <= x; i += 6)
        if (x % i == 0 || x % (i + 2) == 0) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1;i<1000; ++i) {
        if (!is_prime(n * i + 1)) {
            cout << i << endl;
            return 0;
        }
    }
}