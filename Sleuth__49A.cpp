#include <iostream>
#include <set>
#include <sstream>
using namespace std;

string split(std::string& s, char delimiter)
{
    std::string token, out;
    std::istringstream tokenStream(s);
    while (std::getline(tokenStream, token, delimiter))
        out += token;
    return out;
}

int main(){
    set<int> s{'A', 'E', 'I', 'O', 'U', 'Y'};
    string S;
    getline(cin, S);
    S = split(S, ' ');
    if (s.count(toupper(S.at(S.size()-2)))) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}