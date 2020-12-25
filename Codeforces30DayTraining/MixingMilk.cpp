#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> C(3);
    vector<int> M(3);
    cin >> C[0] >> M[0];
    cin >> C[1] >> M[1];
    cin >> C[2] >> M[2];
    for (int i = 0, j = 0; j < 4; ++i, j++) {
        i %= 4;
        auto amt = min(M[i], C[i+1] - M[i+1]);
        M[i] -= amt;
        M[i + 1] += amt;
    }
    auto amt = min(M[2], C[0] - M[0]);
    M[2] -= amt;
    M[0] += amt;

    amt = min(M[0], C[1] - M[1]);
    M[0] -= amt;
    M[1] += amt;
    for (auto u : M)
        cout << u << endl;
    return 0;
}
