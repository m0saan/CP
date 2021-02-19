
#include <iostream>
#include <vector>
using namespace std;

int n,v[5001];

int main(){
    cin >> n;
    bool ans;
    for (size_t i=0; i<n; ++i) {
        cin >> v[i];
        ans = false;
        for (size_t j = 1; j <= n; ++j) {
            if (j == v[v[v[j]]]) {
                ans = true;
                break;
            }
        }
        if (ans) break;
    }
    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}