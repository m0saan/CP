#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, count{}, ans{};
    long long in,p{};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> in;
        if (in > p) { count++; ans = max(ans, count);}
        else count = 1;
        p = in;
    }
    cout << ans << endl;
    return 0;
}