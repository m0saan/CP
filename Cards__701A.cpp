#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, sum{};
    cin >> n;
    vector<int> v(n);
    for(int &i : v) {
        cin >> i;
        sum += i;
    }
    sum /= (n/2);
    for (int i = 0; i < v.size(); ++i){
        for (int j = i; j < v.size(); ++j) {
            if (i !=j && v[i]+v[j] == sum) {
                cout << i + 1 << ' ' << j + 1 << endl;
                v[i] = v[j] = -1;
            }
        }
    }
    return 0;
}