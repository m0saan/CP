//
// Created by Mohammad  Boustta on 2/24/21.
//

#include <iostream>
#include <algorithm>
#include <set>

int ARR[6];

using namespace std;

int main(){
    int score{}, sum{};
    bool ok = false;
    set<int> indexes{};
    for (int & i : ARR) {
        std::cin >> score;
        i = score;
        sum += score;
    }

    std::sort(ARR, ARR+6);
    for (int i = 0; i < 6; ++i) {
        for (int j = i+1; j < 6; ++j) {
            for (int k = j+1; k < 6; ++k) {
                if (ARR[i]+ARR[j]+ARR[k] == sum / 2) {
                    indexes.insert(i);
                    indexes.insert(j);
                    indexes.insert(k);
                    ok = true;
                    break;
                }
            }
            if (ok) break;
        }
        if (ok) break;
    }
    int nSum{};
    for (int i = 0; i < 6; ++i) {
        if (!indexes.count(i)) nSum += ARR[i];
    }

    cout << ((sum/2) == nSum ? "YES" : "NO") << endl;
    return 0;
}