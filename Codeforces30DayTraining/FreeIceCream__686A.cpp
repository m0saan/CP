#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    long long n,x, nDK{}, sum{}, X{};
    bool isPlus{}, isMinus{};
    string S;
    cin >> n >> x;
    for (int i = 0; i < n;) {
        cin >> S;
        if (S[0] == ' ') continue;
        if (S[0] == '+') { isPlus = true; isMinus = false; continue;}
        else if (S[0] == '-') { isPlus = false; isMinus = true; continue;}
        stringstream ss(S);
        ss >> X;
        if (isPlus) { x+=X; i++;}
        else if (isMinus){
            if (X > x) {nDK++; i++; continue;}
            x-= X;
            i++;
        }
    }
    cout << x << ' '<< nDK << endl;
    return 0;
}