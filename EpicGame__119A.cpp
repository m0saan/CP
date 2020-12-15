#include <iostream>
#include <numeric>
using namespace std;


int main(){
    int a,b,n;
    cin >> a >> b >> n;
    int need;
    while (true){
        need = gcd(a, n);
        if (n < need){
            cout << 1 << endl;
            return 0;
        }
        n -= need;
        need = gcd(b, n);
        if (n < need) { cout << 0 << endl; return 0; }
        n -= need;
    }
}