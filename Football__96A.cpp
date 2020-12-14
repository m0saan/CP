#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int ans = 1, count{};
    cin >> s;
    char ch = '0';
    for (char &c : s){
        if (ch == c) {
            count++;
            ans = max(ans, count);
        }
        else {
            count = 1;
            ch = c;
        }
    }
    if (ans >= 7) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}