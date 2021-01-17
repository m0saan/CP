#include <iostream>

using namespace std;

void change(int &v){
    v = 0;
}

int main(){
    int foo = 100;
    cout << "foo is: " << foo << endl;
    change(foo);
    cout << "foo is: " << foo << endl;
    return 0;
}
