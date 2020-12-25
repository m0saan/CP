#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, q=10, ans{};
    cin >> n;
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};
    for (int i = 0; i < v.size(); ++i) {
        if (q+v[i]==n) ans++;
    }

    int nans = ans  * 4 - 1;
    if (n == 20) {
        cout << ans  * 4 - 1<< endl;
    } else if (nans == -1) cout << 0 << endl;
    else cout << ans  * 4 << endl;
    return 0;
}