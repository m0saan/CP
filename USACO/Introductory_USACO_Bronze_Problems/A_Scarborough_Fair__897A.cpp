//
// Created by moboustt on 22/2/2021.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n,m, l,r;
    char c1, c2;
    string S;
    cin >> n >> m >> S;
    for (int i = 0; i < m; ++i) {
        cin >> l >> r >> c1 >> c2;
        for (int j = l; j <= r; ++j) {
            if (S[j-1] == c1) S[j-1] = c2;
        }
    }
    cout << S << endl;
    return 0;
}