#include <iostream>
using namespace std;

int main(){
    int n, total{}, nHired{}, in;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> in;
        if (nHired <= 0 && in < 0){
            total++;
            nHired--;
        } else if (in == -1) nHired--;
        else {
            nHired = nHired < 0 ? 0 : nHired;
            nHired+=in;
        }
    }
    cout << total << endl;
    return 0;
}