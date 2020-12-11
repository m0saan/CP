#include <set>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 10 9 7 10 9 8 5 6 6 5
// 9 8 8 9 10 8 5 8 7 10
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int nOfChilds, maxWeight;
    cin >> nOfChilds >> maxWeight;
    vector<int> weights(nOfChilds);

    for (int i = 0; i < nOfChilds; ++i)
        cin >> weights[i];
    sort(weights.begin(), weights.end());
    int nOfG {};
    size_t j = nOfChilds - 1;
    int i = 0;
    while (i <= j) {
        if (weights[i] + weights[j] > maxWeight)
            j--;
        else { i++; j--;}
        nOfG++;
    }
    cout << nOfG << '\n';
    return 0;
}