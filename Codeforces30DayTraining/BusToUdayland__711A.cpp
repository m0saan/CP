#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    string S;
    int n;
    bool ans = false, isFound=false;
    cin >> n;
    vector<string> V(n);
    for (int i = 0; i < n; ++i) {
        cin >> S;
        for (int j = 0; !isFound && j < S.size(); ++j)
            if (S[j]=='O'&&S[j+1]=='O'){
                S[j]= S[j+1] = '+';
                ans=true;
                isFound=true;
            }
        V[i]=S;
    }
    if (ans){ cout << "YES" << endl; for (auto & e : V) cout << e << endl;}
    else cout << "NO" << endl;
    return 0;
}

/*
 XO|XO
XX|XX
XO|XX
XO|XO
XX|OX
XX|XX
OX|XO
OX|XX
XO|XX
XX|XX
XO|XO
XO|OX
XX|OX
XX|XX
XO|XX
XO|OX
XO|XX
XO|OX
XO|OX
OX|XO
XO|XO
XO|XX
XO|XX
XO|XX
OX|OX
XO|XX
OX|XO
XX|XX
XX|OX
XO|XO
XO|XO
OX|XO
XO|XO
XO|XO
XX|XX
XX|OX
XX|XX
XX|XX
XX|XO
XX|XX
XX|XX
OX|OX
XX|XO
XO|XO
XX|OX
XO|XO
OX|XX
XO|XX
XO|XO
XO|OX
OX|XX
OX|XO
OX|OO
XX|XO
XX|XO
OX|XX
XO|XX
OX|XO
XO|OX
XX|XO
OX|OX
OX|OO
OX|XX
XX|XO
XX|OX
XX|OX
XX|OX
XO|XO
OX|XO
XO|OX
XX|XO
XO|OX
 */