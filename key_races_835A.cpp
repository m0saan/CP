#include <iostream>
using namespace std;
int main(){
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int p1 = t1 + (s * v1) + t1;
    int p2 = t2 + (s * v2) + t2;

    if (p1 > p2)
        cout << "Second" << '\n';
    else if (p2 > p1)
        cout << "First" << '\n';
    else
        cout << "Friendship" << '\n';
    return 0;
}