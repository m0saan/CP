#include <vector>
#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main(){
    int n;
    unordered_set<int> set;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    int f=v.at(0);
    if (all_of(v.begin(), v.end(), [f](int&a){return a==f;})) {
        cout << 1 << '\n';
        return 0;
    }
    int ans{};
    for (auto& x: v) {
        if (!set.count(x)) ans++;
        set.insert(x);
    }
    cout << ans << '\n';
    return 0;
}