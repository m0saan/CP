#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int mx{};
    vector<int> v(4);
    for (int i = 0; i < 4; ++i) {
        cin >> v[i];
        mx = max(v[i], mx);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size()-1; ++i)
        cout << mx-v[i] << ' ';
    return 0;
}