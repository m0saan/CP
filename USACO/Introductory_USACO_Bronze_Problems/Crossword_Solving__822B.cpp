//
// Created by moboustt on 22/2/2021.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;

    vector<int> ans;
    vector<int> newAns;

    ans.reserve(n);
    for (int i = 1; i <= n; ++i) ans.push_back(i);

    for (int i = 0; i < m-n+1; ++i) {
        newAns.clear();
        for (int k = 0; k < n; ++k) {
            if (t[i+k] != s[k]) newAns.push_back(k+1);
        }
        if (newAns.size() < ans.size()) ans = newAns;
    }
    cout << ans.size() << endl;
    for (const auto &e : ans)
        cout << e << " ";
    return 0;
}