#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
#define  ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    int f = v.at(0);
    if (all_of(v.begin(), v.end(), [&f](ll &a) { return a == f; })) {
        cout << 0 << ' ';
        return 0;
    }
    ll ans{};
    for (ll i = 0; i < v.size(); ++i) {
        if (v[i] > v[i + 1]) {
            ans += (v[i] - v[i + 1]);
            v[i+1] += (v[i] - v[i + 1]);
        }
    }
    cout << ans << ' ';
    return 0;
}