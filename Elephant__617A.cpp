#include <iostream>
using namespace std;
int main(){
    int x, d{},i;
    cin >> x;
    for (i = 0; d<x; ++i) {
        if (d+5<=x) d+=5;
        else if (d+4<=x) d+=4;
        else if (d+3<=x) d+=3;
        else if (d+2<=x) d+=2;
        else if (d+1<=x) d+=1;
    }
    cout << i << endl;
    return 0;
}