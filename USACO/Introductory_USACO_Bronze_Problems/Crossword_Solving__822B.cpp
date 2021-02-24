//
// Created by moboustt on 22/2/2021.
//

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main(){
    int n, m,j{}, nToBeReplaced{}, prevCount{numeric_limits<int>::max()}, index{}, l{-1};
    vector<vector<int>> v{};
    string s, t;
    cin >> n >> m >> s >> t;
    if (s.length() == 1 && t.length() == 1 && s != t) { cout << 1 << endl << 1 << endl; return 0; }
    for (int i = 0; i < t.length(); ++i) {
        if (s[j] == t[i]){
            ++j;
            nToBeReplaced = 0;
            v.emplace_back(vector<int>{});
            l++;
            for (int k = i+1; k < i+s.length(); ++k) {
                if (s[j++] != t[k]) { nToBeReplaced++; v[l].push_back(j); }
            }
            if (nToBeReplaced<prevCount) {
                index = l;
                nToBeReplaced = min(nToBeReplaced, prevCount);
            }
            prevCount = nToBeReplaced;
            j=0;
        }
    }
    cout << nToBeReplaced << endl;
    if (l >= 0) {
        auto vv = v[index];
        for (auto const &e : vv) {
            if (e != 0) cout << e << " ";
        }
    }
    return 0;
}