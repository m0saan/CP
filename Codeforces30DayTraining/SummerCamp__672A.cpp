#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n <= 9) {cout << n << endl; return 0;}
    string S;
    S.reserve(n);
    for (int i = 0; i < n; ++i)
        S += to_string(i);
    cout << S[n]<< endl;
    return 0;
}