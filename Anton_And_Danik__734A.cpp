#include <iostream>
using namespace std;
int main(){
    int n, A{}, D{};
    string s;
    cin >> n >> s;
    for (char &c : s)
        if (c=='A') A++; else D++;

    if (A>D) cout << "Anton";
    else if(D>A) cout << "Danik";
    else cout << "Friendship";
    return 0;
}