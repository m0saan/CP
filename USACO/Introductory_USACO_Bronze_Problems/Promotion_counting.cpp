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

ostream &operator <<(ostream &ostream, const vector<pi> &v) {
    for (auto &e : v) {
        ostream << e.first << " " << e.second << endl;
    }
    return ostream;
}

void setIO(string name) { // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0); // see Fast Input & Output
    // alternatively, cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin); // see Input & Output
        freopen((name + ".out").c_str(), "w", stdout);
    }
}



int main() {
    setIO("promote");
    vector<pi> numberOfParticipants(4);
    for (int i = 0; i < 4; ++i)
        cin >>  numberOfParticipants[i].first >> numberOfParticipants[i].second;
    cout << numberOfParticipants << endl;
}