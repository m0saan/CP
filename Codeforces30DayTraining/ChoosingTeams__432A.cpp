#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,k, in, ans{}, count{};
    cin >> n >> k;
    vector<int> V(n);
    for (int i = 0; i < n; ++i) cin >> V[i];
    for_each(V.begin(), V.end(), [&k](int &v){ v+=k;});
    auto res = count_if(V.begin(), V.end(), [](int &v){ return v<=5;});
    cout << res / 3 << endl;
    return 0;
}