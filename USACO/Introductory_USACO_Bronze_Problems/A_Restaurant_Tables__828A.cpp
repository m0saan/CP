//
// Created by moboustt on 21/2/2021.
//

#include <iostream>

using namespace std;

int main(){
    int n{}, a{}, b{}, sum{}, in;
    cin >> n >> a >> b;
    int nOfTwoSeats = b*2;
    for (int i = 0; i < n; ++i) {
        cin >> in;
        if (in == 1) {
            if (a > 0) a--;
            else if (nOfTwoSeats > 0) nOfTwoSeats-=1;
            else sum += 1;
        }
        else if (in == 2) {
            if (nOfTwoSeats - 2 >= 0) nOfTwoSeats-=2;
            else if (a - 2 >= 0) a -= 2;
            //else if (a-1 >= 0) { a--; in--;}
            else sum += in;
        }
    }
    cout << sum << endl;
    return 0;
}