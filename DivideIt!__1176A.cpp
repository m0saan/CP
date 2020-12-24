#include <iostream>
using namespace std;
#define ll long long
int main(){
    ll q, n, ans, p;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> n;
        if (n==1) {cout << 0 << endl; continue;}
        else {
            ans =0;
            p=0;
            while (n != 1) {
                ans++;
                if (n % 2 == 0) n /= 2;
                else if (n % 3 == 0) n = (n * 2) / 3;
                else if (n % 5 == 0) n = (4 * n) / 5;
                if (n<=0 || p==n) {ans=-1; break;}
                p=n;
            }
            cout << ans << endl;
        }
    }
    return 0;
}