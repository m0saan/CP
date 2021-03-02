#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int v1,v2,v3,vm;
    cin >> v1 >> v2 >> v3 >> vm;
    if (v3>vm*2 || vm>v3*2 || vm >= v2 || vm >= v1)
        cout << -1 << endl;
    else cout << v1*2 << endl << v2*2 << endl << max(v3,vm) << endl;
    return 0;
}