//
// Created by moboustt on 22/3/2021.
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

int main() {
    setIO("word");
    int n, k, count{};
    cin >> n >> k;
    string str;
    for (int i = 0; i < n; ++i) {
        cin >> str;
        if (i != 0 && i+1 != n && count + str.length() <= 7)
            cout << " ";
        if (count + str.length() <= 7) {
            cout << str;
            count += str.length();
        } else {
            cout << endl << str;
            count = str.length();
        }
    }
    return 0;
}