#include <iostream>
#include <numeric>
using namespace std;

int main(){
    int Y,W, ans{};
    cin >> Y >> W;
    for (int i = 1; i <=6 ; ++i)
        if (i != Y || i!=W) ans++;
    int g = gcd(Y,W);
    cout << ans / g << '/' << 6 / g << endl;
    return 0;
}