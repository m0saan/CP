#include <iostream>
using namespace std;
int main() {
    int n, ans{};
    string passWord, SS;
    cin >> passWord >> n;
    for (int i = 0; i < n; ++i) {
        cin >> SS;
        if (SS[0] == passWord.at(1)) ans++;
        if (SS[1] == passWord.at(0)) ans++;
        if (ans == 2 || SS == passWord){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}