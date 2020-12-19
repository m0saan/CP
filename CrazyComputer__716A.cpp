#include <iostream>
using namespace std;
int main(){
    int n,c, in, ans{},p;
    cin >> n >> c >> p;
    int CC = c;
    for (int i = 0; i < n-1; ++i) {
        cin >> in;
        if (in-p <= c)
            ans++;
        else if (in-p > c) { ans = 0; CC = c;}
        CC+=c;
        p = in;
    }
    cout << ans+1 << endl;
    return 0;
}