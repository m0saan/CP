#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <vector<int>> a(25)
    int P{};
    for (size_t i=0; i<5; ++i){
        for (size_t j=0; j<5; ++j){
            cin >> a[j];
            if (a[j] != 1) ++P;
        }
    }
    cout << abs(13 - P);
    return 0;
}