//
// Created by moboustt on 21/2/2021.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, sum{}, nn{};
    cin >> n;
    for (int i = 1; i < n; ++i) {
        int rest = n - i;
        if (rest%i==0) sum++;
    }
    cout << sum << endl;
    return 0;
}