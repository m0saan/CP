#include <iostream>
#include <map>
#include <string>
#define ll long long
using namespace std;

int main(){
    int n;
    ll total{};
    string S;
    cin >> n;
    map<char, int> Polyhedrons{
            {'T', 4},
            {'C', 6},
            {'O', 8},
            {'D', 12},
            {'I', 20},
    };
    for (int i = 0; i < n; ++i) {
        cin >> S;
        int t = Polyhedrons.at(S[0]);
        total += t;
    }
    cout << total << endl;
    return 0;
}