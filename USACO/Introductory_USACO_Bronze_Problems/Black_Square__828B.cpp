//
// Created by Mohammad  Boustta on 2/24/21.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, cnt{}, minX = {999}, maxX{}, minY{999}, maxY{};
    char c;
    string S;
    cin >> n >> m;

    vector<pair<int, int>> indexes{};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> c;
            if (c == 'B') { indexes.emplace_back(make_pair(i + 1, j + 1)); ++cnt; }
        }
    }
    for (const auto &pair : indexes) {

        minX = min(minX, pair.first);
        maxX = max(maxX, pair.first);

        minY = min(minY, pair.second);
        maxY = max(maxY, pair.second);
    }
    int len = max(maxX - minX + 1, maxY - minY + 1);
    if (len > m || len > n) {
        cout << -1 << endl;
        return 0;
    }
    else {
        len *= len;
        cout << (indexes.empty() ? 1 : len - cnt) << endl;
    }
    return 0;
}
