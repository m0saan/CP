#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int Y, W, ans{};
    float an{};
    cin >> Y >> W;
    int xx = max(Y,W);
    int x = min(Y,W);
    for (int i = 1; i <= 6; i++)
        if (i >= xx) ans++;
    auto gcDD = gcd(ans, 6);
    cout << ans/gcDD << '/' << 6/ gcDD << endl;
    return 0;
}