//
// Created by Mohammad  Boustta on 3/5/21.
//

#include <iostream>

using namespace std;

char ARR[25][25];

int main(){
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cin >> ARR[i][j];
    }

    
    return 0;
}