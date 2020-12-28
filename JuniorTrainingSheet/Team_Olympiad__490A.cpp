#include <iostream>
#include <vector>
int ones[5000+1], k,l,m;
int twos[5000+1];
int threes[5000+1];
using namespace std;

int main(){
    int n, in, n1{},n2{},n3{};
    cin >> n;
    vector<int> V(n);
    for (int i = 0; i < n; ++i) {
        cin >> in;
        if (in==1) { ones[k++] = i+1; n1++;}
        else if (in==2) { twos[l++] = i+1; n2++;}
        else { threes[m++] = i+1; n3++;}
    }
    n = min(min(n1,n2),n3);
    if (n==0) {cout << 0; return 0;}
    else {
        cout << n << endl;
        for (int i = 0; i < n; ++i) {
            cout << ones[i] << ' ' << twos[i] << ' ' << threes[i] << endl;
        }
    }
    return 0;
}