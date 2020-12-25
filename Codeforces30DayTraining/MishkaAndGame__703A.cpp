#include <iostream>
using namespace std;
int main(){
    int n,a,b,M{}, C{};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if (a>b)++M;
        else if (a<b) ++C;
    }
    if (M>C) cout << "Mishka" << endl;
    else if (M<C) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
    return 0;
}