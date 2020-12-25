#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    string s;
    cin >> s;
    int cL{}, cU{};
    for (char &c:s) {
        if (islower(c)) cL++;
        else cU++;
    }
    if (cL>=cU) for_each(s.begin(), s.end(), [](char c){ cout << (char)tolower(c);});
    else for_each(s.begin(), s.end(), [](char c){cout << (char)toupper(c);});
    return 0;
}