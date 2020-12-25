#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, in{}, total{};
    bool isPossible = true;
    vector<bool> v(101);
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> in;
        for (int j = 0; j < in; ++j) {
            int t;
            cin >> t;
            v[t - 1] = true;
        }
    }
    for (int i = 0; i < m; i++)
        if (!v[i])isPossible = false;
    if (!isPossible) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}