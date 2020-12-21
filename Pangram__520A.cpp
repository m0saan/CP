#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    int n;
    string S;
    set<char> set;
    cin >> n >> S;
    for (char &c : S)
        set.insert(tolower(c));
    cout << (set.size() == 26 ? "YES" : "NO") << endl;
    return 0;
}