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

ostream &operator << (ostream &ostream, const vector<pi> &v) {
    for (auto &e : v)
        ostream << e.first << " " << e.second << endl;
    return ostream;
}

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

const int arrSize = 7;
int ARR[arrSize];

int main() {
    //setIO("");
    set<int> elements;
    for(int &e : ARR){
        cin >> e;
        elements.insert(e);
    }
    sort(ARR, ARR+arrSize);
    for (int i = 0; i < arrSize; ++i) {
        for (int j = i+1; j < arrSize; ++j) {
            for (int k = j+1; k < arrSize; ++k) {
                if (elements.count(ARR[i]+ARR[j]) && elements.count(ARR[k]+ARR[j])
                && elements.count(ARR[i]+ARR[k]) && elements.count(ARR[i]+ARR[j]+ARR[k]))
                    cout << ARR[i] << " " << ARR[j] << " " << ARR[k];
            }
        }
    }
}