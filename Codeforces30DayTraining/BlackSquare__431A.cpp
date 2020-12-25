#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int total{};
    vector<int> V(4);
    string S;
    for (int i{}; i<4; ++i) cin >> V[i];
    cin >> S;
    for (char &c : S) total += V[c-48-1];
    cout << total << endl;
    return 0;
}