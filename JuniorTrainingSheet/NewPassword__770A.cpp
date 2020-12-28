#include <iostream>
#include <set>
using namespace std;
int main(){
    int n,k, count{};
    cin >> n >> k;

    char alpha[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    set<int> s;
    for (int i = 0; count < n; ++i) {
        cout << alpha[i%k]; ++count;
    }
    return 0;
}