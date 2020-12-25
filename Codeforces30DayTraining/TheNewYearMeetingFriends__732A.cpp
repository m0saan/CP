#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int a[3], ans{};
    for (int & i : a)
        cin >> i;
    sort(a, a+3);
    ans += abs(a[0]-a[1]);
    ans += abs(a[1]-a[2]);
    cout << ans << endl;
    return 0;
}