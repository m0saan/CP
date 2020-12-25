#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n;
    long long S{}, D{}, toAdd;
    cin >> n;
    vector<int> V(n);
    for (int i = 0; i<n; ++i)
        cin >> V[i];
    int N=1;
    for (int i=0, j=V.size()-1; i<=j;) {
        toAdd = max(V[i], V[j]);
        if ((N++)%2==1)S+=toAdd;
        else D+=toAdd;
        if (V[i] == toAdd)i++;
        else j--;
    }
    cout << S << ' ' << D << endl;
    return 0;
}