#include <iostream>
using namespace std;
int main(){
    int n, in1, in2, ans{}, cpt{};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> in1 >> in2;
        ans -= in1;
        ans += in2;
        cpt = max(cpt, ans);
    }
    cout << cpt << endl;
    return 0;
}