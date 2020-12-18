#include <iostream>
using namespace std;
int main(){
    int n,k, total{}, i;
    cin >> n >> k;
    int nMin = 4*60 - k;
    for (i = 1; i <= n;) {
        total += i * 5;
        if (total > nMin) break;
        i++;
    }
    cout << i-1 << endl;
    return 0;
}