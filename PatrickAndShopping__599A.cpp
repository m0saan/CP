#include <iostream>
using namespace std;
int main(){
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int noSrt = d1*2+d2*2;
    int total = min((d1+d3)*2, (d2+d3)*2);
    cout << min(total,min(noSrt, d1+d2+d3)) << endl;
    return 0;
}