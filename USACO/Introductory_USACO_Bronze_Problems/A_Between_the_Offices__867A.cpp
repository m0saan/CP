//
// Created by Mohammad  Boustta on 2/22/21.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n{}, nS{}, nF{};
    string S;
    cin >> n >> S;
    for (int i = 0; i < n; ++i) {
        if (i+1<S.length() && S[i] == 'S' && S[i+1] == 'F') { ++nS;}
        else if (i+1<S.length() &&  S[i] == 'F' && S[i+1] == 'S') { ++nF;}
    }
    cout << (nS > nF ? "YES" : "NO") << endl;
    return 0;
}