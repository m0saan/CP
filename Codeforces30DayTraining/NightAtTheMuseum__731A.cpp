#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string s;
    cin >> s;
    char ch = 1;
    int ans{};
    // a:97, z:122
    // min(|x-y|,l-|x-y|)
    for (char &c:s){
        int ll = (int)c - 96;
        ans += min(abs(ch-ll), 26-abs(ch-ll));
        ch = (int)c - 96;
    }
    cout << ans << endl;
    return 0;
}