#include <iostream>
using namespace std;
int main(){
    int n, x = 0, y = 0;
    string S;
    cin >> n >> S;
    int ans{};
    bool isUp = S[0] == 'U';
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'U') y += 1;
        else if (S[i] == 'R') x += 1;
        if (i + 1 < S.size() && x == y && isUp && S[i + 1] == 'R') {
            ans++;
            isUp = false;
        }
        if (i + 1 < S.size() && x == y && !isUp && S[i + 1] == 'U') {
            ans++;
            isUp = true;
        }
    }
    cout << ans << ' ';
    return 0;
}
