#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, in, mi = 99999;
    cin >> n;
    pair<int,int> p;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v.size(); ++j) {
            if (abs(i-j)==1 && abs(v[i] - v[j]) < mi && i!=j)
            { mi = abs(v[i] - v[j]); p.first = i+1; p.second = j+1;}
        }
    }
    if (abs(v[0]-v[n-1]) < mi) { p.first = 1; p.second=n;}
    cout << p.first << ' ' << p.second << endl;
    return 0;
}