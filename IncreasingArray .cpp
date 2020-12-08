#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i];
    int ans{};
    while (any_of(v.begin(), v.end(), [](int &a, int &b){ return a < b;})){
        for_each(v.begin(), v.end(), [](int &a, int &b){
            if (a > b)
                b++;
        });
        ans++;
    }
    cout << ans << ' ';
}
