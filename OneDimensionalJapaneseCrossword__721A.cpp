#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, count{}, ans{}, i{};
    vector<int> v;
    string S;
    cin >> n >> S;
    for (char c : S){
        if (c == 'B') count++;
        else if (count){
            i++;
            v.push_back(count);
            count=0;
        }
    }
    if (count) {v.push_back(count); ++i;}
    cout << i << endl;
    for (int e : v)
        cout << e << ' ';
    return 0;
}