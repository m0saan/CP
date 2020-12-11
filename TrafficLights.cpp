#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,n;
    cin >> x >> n;
    set<int> set{0, x};
    multiset<int> m_set;
    int p, maxDistance{}, prev{};
    for (int i = 0; i < n; ++i) {
        cin >> p;
        set.insert(p);
        maxDistance = 0;
        prev = 0;
        for (auto & elem : set) {
            maxDistance = max(maxDistance, abs(elem - prev));
            prev = elem;

        }
        cout << maxDistance << '\n';
    }
}


