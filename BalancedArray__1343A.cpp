#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, in;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> in;
        if (in % 4 != 0) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            vector<int> v;
            for (int j = 1; j <= in / 2; ++j)
                v.push_back(2 * j);
            v.push_back(1);
            for (int j = 1; j < in/2; j+=1)
                v.push_back(2 * j + 1);
            v[v.size()-1] += in/2;
            for (int &e : v)
                cout << e << ' ';
            cout << endl;
            v.clear();
        }
    }
    return 0;
}
