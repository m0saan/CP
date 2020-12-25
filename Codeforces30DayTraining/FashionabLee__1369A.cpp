#include <iostream>

using namespace std;

int main() {
    int t, in;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> in;
        if (in > 3 && in%4==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}