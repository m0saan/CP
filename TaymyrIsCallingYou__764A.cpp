#include <iostream>
#include <numeric>
using namespace std;
int main(){
    int n,m,z, ans{};
    cin >> n >> m >> z;
    int g = gcd(m,n);
    int l = m*n / g;
    cout << z /l << endl;
    return 0;
}