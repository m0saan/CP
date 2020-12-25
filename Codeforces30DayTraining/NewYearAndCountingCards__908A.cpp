#include <cctype>
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    string S;
    cin >> S;
    int total{};
    set<char> vowels{'a','e','i','o','u'};
    for (int i = 0; i < S.size(); ++i)
    	if (vowels.count(S[i]) || (isdigit(S[i]) && (S[i]-48)%2 != 0)) total++;
    cout << total << endl;
    return 0;
}
