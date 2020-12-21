#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int diff = min(a,b);
    cout << diff << ' ';
    cout << (max(a,b) - diff)/2 << endl;
    return 0;
}