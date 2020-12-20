#include <iostream>
using namespace std;
int main(){
    int n, h, in;
    long long count{};
    cin >> n >> h;
    for (int i = 0; i < n; ++i) {
        cin >> in;
        if (in > h) count += 2;
        else count += 1;
    }
    cout << count << endl;
    return 0;
}