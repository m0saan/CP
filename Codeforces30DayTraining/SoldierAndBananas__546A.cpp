#include <iostream>
using namespace std;
int main(){
    int  k,n,w, total{};
    cin >> k >> n >> w;
    for (int i = 1; i <= w; ++i)
        total += (i*k);
    if (total-n > 0) cout << total - n << endl;
    else cout << 0 << endl;
    return 0;
}