#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main(){
    ll n,k;
    cin >> n >> k;
    if (static_cast<ll>(floor(n/k))%2==1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}