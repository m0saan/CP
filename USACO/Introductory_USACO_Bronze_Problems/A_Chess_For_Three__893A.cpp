//
// Created by moboustt on 21/2/2021.
//

#include <iostream>

using namespace std;

int main(){
    int n, w, x=1, y=2;
    cin >> n;
    bool flag = true;
    for (int i = 0; i < n; ++i) {
        cin >> w;
        if (!flag) break;
        if (w == x or w == y){
            y = 6 - x - y;
            x = w;
        } else flag = false;
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}