#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    int ldigit{};
    cin >> s;
    for_each(s.begin(), s.end(), [&ldigit](char &c){ if (c == '4' || c == '7') ldigit++; });
    if (ldigit ==0)  { cout << "NO" << endl; return 0;}
    while (ldigit > 0){
        int x = ldigit %10;
        ldigit /= 10;
        if (x == 4 || x == 7) continue;
        else { cout << "NO" << endl; return 0;}
    }
    cout << "YES" << endl;
    return 0;
}