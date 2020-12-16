#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main(){
    set<int> s{'A', 'E', 'I', 'O', 'U', 'Y'};
    string S;
    cin >> S;
    istringstream iss(S);
    vector<string> results(std::istream_iterator<std::string>{iss},
                                     std::istream_iterator<std::string>());
    string T = results[results.size()-2];
    if (s.count(toupper(T.at(T.size()-2)))) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}