//
// Created by Mohammad  Boustta on 2/22/21.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int main(){
    long long N{}, K{}, in;
    pair<long,long> pair1;
    pair1.second = numeric_limits<long long >::max();
    cin >> N >> K;
    vector<long long> v(K,0);
    for (int i = 0; i < K; ++i) {
        cin >> in;
        v[i] = in;
        if (N%in < pair1.second) { pair1.first =i+1;  pair1.second =  N%in; }
    }
    cout << pair1.first << " " << (N-pair1.second) / v[pair1.first-1] << endl;
    return 0;
}