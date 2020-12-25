#include <iostream>
#include <set>
/*
 * 10 10 10
90 41 20 39 49 21 35 31 74 86
14 24 24 7 82 85 82 4 60 95
 */
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int nOfApplicants;
    int nOfApartments;
    int K;
    int x;
    int count = 0;
    set<int> set;
    cin >> nOfApplicants >> nOfApartments >> K;
    while (nOfApplicants && cin >> x) {
        set.insert(x);
        --nOfApplicants;
    }
    int l;
    cin.ignore();
    while (cin >> l) {
        auto lb = set.lower_bound(l);
        if (l - K <= *lb && l + K >= *lb)
            count++;
    }
    cout << count << '\n';
}
