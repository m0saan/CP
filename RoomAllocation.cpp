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
    vector<pair<int, int>> m(n);
    int s, d;
    for (int i = 0; i < n; ++i) {
        cin >> s >> d;
        m[i] = make_pair(s,d);
    }

}