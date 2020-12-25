#include <iostream>
using namespace std;
int main(){
    int n,m, count{},a,b, ans{};
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a >> b;
            if (a==1 || b==1) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}