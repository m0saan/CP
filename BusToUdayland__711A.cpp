#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    string S;
    int n;
    bool ans = false;
    cin >> n;
    vector<string> V(n);
    for (int i = 0; i < n; ++i) {
        cin >> S;
        for (int j = 0; j < S.size(); ++j)
            if (i+1<S.size() && S[i]=='O'&&S[i+1]=='O'){S[i]= S[i+1] = '+'; ans=true;}
        V[i]=S;
    }
    if (ans){ cout << "YES" << endl; for (auto & e : V) cout << e << endl;}
    else cout << "NO" << endl;
    return 0;
}