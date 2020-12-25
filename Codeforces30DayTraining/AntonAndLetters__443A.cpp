#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    set<char> set;
    string S;
    getline(cin, S);
    for (char &c : S) if (isalpha(c)) set.insert(c);
    cout << set.size()<< endl;
    return 0;
}