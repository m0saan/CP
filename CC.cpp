#include <iostream>
#include <deque>
using namespace std;
int main() {
    int t, n, tmp;
    cin >> t;
    deque<deque<int>> v(t);
    for (int i = 0; i < t; ++i) {
        cin >> n;
        for (int j = 0; j < n; ++j) {
            cin >> tmp;
            if (j % 2 == 0)
                v[i].push_front(tmp);
            else v[i].push_back(tmp);
        }
    }

    for (auto & dq : v) {
        for (int elm : dq)
            cout << elm << ' ';
        cout << endl;
    }
    return 0;
}

