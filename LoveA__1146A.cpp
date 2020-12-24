#include <iostream>
#include <string>
using namespace std;

int main(){
    int a{},other{};
    string S;
    cin >> S;
    for (char &c : S){
        if (c=='a') ++a;
        else ++other;
    }
    while (other>=a)
        other--;
    cout << other+a << endl;
    return 0;
}