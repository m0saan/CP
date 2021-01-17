#include <sstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
    stringstream numToString;
    numToString << 5;
    string val;
    numToString >> val;
    cout << val.size() << endl << "val contains the character "<< val << endl;
    
    stringstream stringToNum;
    stringToNum << "55";
    int num;
    stringToNum >> num;
    cout << "num: " << num << endl;

    string s, str;
    getline(cin, s);
    stringstream ss(s);
    int i=0;
    cout << fixed;
    while(ss >> str)
        cout << '('<< i++ << ')' << '/'<< " " <<  str << endl;
    return 0;
}
