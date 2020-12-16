#include <iostream>
using namespace std;
int main(){
    int n,m, need;
    cin >> n >> m;
    if (n==1){
        cout << 0 << endl;
        return 0;
    }
    for (int i = 1; ; ++i) {
        if (i == n) need  = (i%(n+1));
        else need  = ((i)%n);
        if (need > m) {
            cout << m << endl;
            return 0;
        }
        if (i>n) i=1;
        m-=need;
    }
}