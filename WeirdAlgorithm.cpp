#include <iostream>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin >>n;
    cout <<n<<endl;
    while (n!=1) {
        if (n%2==0) n/=2;
        else n=n*3+1;
        cout <<n<<endl;
    }
    return 0;
}