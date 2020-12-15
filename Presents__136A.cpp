#include <iostream>
#include <map>
using namespace std;
int main(){
    int n, in;
    map<int,int> m;
    cin >> n;
    for (int i=1; i <= n; ++i){
        cin >> in;
        m[in] = i;
    }
    for (auto &p : m)
        cout << p.second << ' ';
    cout << endl;
    return 0;
}