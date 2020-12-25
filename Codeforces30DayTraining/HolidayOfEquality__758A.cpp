#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, mx{}, ans{};
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) { cin >> v[i]; mx = max(mx, v[i]); }
    for(int &e : v)
        ans += abs(e-mx);
    cout << ans << endl;
    return 0;
}
