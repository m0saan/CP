#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, ans{};
    cin >> n;
    vector<int> v1(n-1);
    vector<int> v2(n-1);
    for (int i = 0; i < n-1; ++i) cin >> v1[i];
    for (int i = 0; i < 2; ++i) cin >> v2[i];
    for (int i = v2[0]-1; i < v2[1]-1; ++i)
        ans += v1[i];
    cout <<  ans << endl;
    return 0;
}