#include <iostream>
using namespace std;

int main(){
    int n,m;
    bool which = true;
    cin >> n >> m;
    string S1(m, '#');
    string S2(m-1, '.');
    for (int i = 1; i<=n; ++i) {
        if (i%2==1) cout << S1 << endl;
        else{
            if (which){ cout << S2 << '#' << endl; which = false;}
            else { cout << '#' << S2 << endl; which = true;}

        }
    }
    return 0;
}