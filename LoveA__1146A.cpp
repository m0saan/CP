#include <iostream>
#include <string>
using namespace std;

int main(){
    int a{},other{};
    string S;
    for (char &c : S){
        if (c=='a') ++a;
        else ++other;
    }
    cout << other - (a+1)<< endl;
    return 0;
}