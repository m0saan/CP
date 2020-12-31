#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    long long in;
    vector<int> v;
    while (cin >> in && in!=0){
        for (int i = 1; i*i <= in; ++i)
            if (in%i==0) { v.push_back(in/i); }
        if (v.size() % 2 ==0) cout << "YES"<< endl;
        else cout << "NO" << endl;
        cout << v.size() << endl;
        v.clear();
    }
    return 0;
}