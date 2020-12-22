#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, ans{};
    string S;
    cin >> n >> S;
    for (int i = 0; i < S.size(); ++i)
        if (i + 1 < S.size() && S[i] == S[i + 1]) ans++;
    cout << ans << endl;
    return 0;
}