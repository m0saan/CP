//
// Created by moboustt on 23/3/2021.
//

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

void setIO(string name) { // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); // see Fast Input & Output
    // alternatively, cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        if (freopen((name + ".in").c_str(), "r", stdin) == NULL)
            cout << "Something went wrong" << endl; // see Input & Output
        if (freopen((name + ".out").c_str(), "w", stdout) == NULL)
            cout << "Something went wrong" << endl;
    }
}

constexpr auto filename  = "buckets";
constexpr auto arrSize = 10;

int main() {
    setIO(filename);
    int bx, by, rx, ry, lx,ly;
    char input;
    for (size_t i = 0; i < arrSize; ++i) {
        for (size_t j = 0; j < arrSize; ++j) {
            cin >> input;
            if (input == 'B') { bx = j; by = i; }
            else if (input == 'R') { rx = j; ry = i; }
            else if (input == 'L') { lx = j; ly = i; }
        }
    }
    auto ans = abs(bx - lx) + abs(by - ly);
    auto dist_br = abs(bx - rx) + abs(by - ry);
    auto dist_rl = abs(lx - rx) + abs(ly - ry);
    if ( (bx == rx || by == ry) && ans == dist_br + dist_rl) cout << ans + 1 << endl;
    else cout << ans - 1 << endl;

    return 0;
}