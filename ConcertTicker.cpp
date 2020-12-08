#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
  5 3
  5 3 7 8 5
  4 8 3
 */

int main(){
    int nOfCos, nOfTic;
    cin >> nOfCos >> nOfTic;

    vector<int> ticPrices(nOfCos);

    for (int i = 0; i < nOfCos; ++i)
        cin >> ticPrices[i];
    sort(ticPrices.begin(), ticPrices.end());

    int x;
    while (cin >> x) {
        if (ticPrices.empty()) {
            cout << -1 << '\n';
            return 0;
        }
        auto lb = lower_bound(ticPrices.begin(), ticPrices.end(), x);
        if (*(lb - 1) < x && *lb != x && lb != ticPrices.begin())
            lb--;
        if (*lb <= x) {
            cout << *lb << '\n';
            ticPrices.erase(lb);
        }
        else cout << -1 << '\n';
    }
    return 0;
}