#include <iostream>
using namespace std;
int main(){
    int n, ans{},p{};
    cin >> n;
    for (int i = 1; p<n && i<=n; i++) {
        if (i%2==1) p+= 1;
        else p+= 2;
        if (p>n) break;
        ans++;
    }
    cout << ans << endl;
    return 0;
}