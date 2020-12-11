#include <iostream>
#include <map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    map<char, int> m;
    char c;

    while (cin >> c)
        m[c] += 1;
    int max{};
    for (auto &p : m)
        if (p.second > max) max = p.second;
    cout << max << '\n';
}