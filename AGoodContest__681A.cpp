#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, a , b;
    string s;
    cin >> n;
    // beforei ≥ 2400 and afteri > beforei,
    for (int i = 0; i < n; ++i) {
        cin >> s >> b >> a;
        if (b >= 2400 && a > b) {cout << "YES" << endl; return 0 ;}
    }
    cout << "NO" << endl;
    return 0;
}
