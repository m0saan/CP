//
// Created by moboustt on 21/2/2021.
//

#include <iostream>

using namespace std;

int main(){
    int n{}, a{}, b{}, c{}, in, sum{};
    cin >> n >> a >> b;
    for (int i = 0; i < n; ++i) {
        cin >> in;
        if (in == 1) {
            if (a > 0) a--;
            else if (b > 0) { b--; c++;}
            else if (c>0) {c--;}
            else sum += 1;
        }
        else if (in == 2) {
            if (b > 0) b--;
            else sum += 2;
        }
    }
    cout << sum << endl;
    return 0;
}