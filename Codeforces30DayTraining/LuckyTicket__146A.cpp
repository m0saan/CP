#include <iostream>
using namespace std;
int main() {
    int n, sum1{}, sum2{}, f{};
    string dig;
    cin >> n >> dig;
    for (char &c : dig) {
        if (c == '7' || c == '4') {
            if (f < n / 2) {
                sum1 += c + 48;
                f++;
            } else sum2 += c + 48;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    if (sum1 == sum2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
