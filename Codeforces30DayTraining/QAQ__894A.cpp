#include <iostream>
#include <string>
using namespace std;

int main(){
    int ans{};
    string S;
    getline(cin, S);
    for (int i = 0; i < S.size(); ++i) {
        for (int j = i+1; j < S.size(); ++j) {
            for (int k = j+1; k < S.size(); ++k)
                if (i!=j && j!=k && S[i]=='Q' && S[j]=='A' && S[k]=='Q') ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}