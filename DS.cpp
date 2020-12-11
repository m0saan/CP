
#include <vector>
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

void distinctNumbers(){
    int n;
    int x;
    unordered_set<int> set;
    cin >> n;
    while (cin >> x && n) {
        if (!set.count(x))
            set.insert(x);
        n--;
    }
    cout << set.size() << '\n';
}
void Apartments() {
    // n -> num of applicants
    // m -> num of apartments
    // k -> max allowed difference

    int nOfApplicants;
    int nOfApartments;
    int K;
    int x;
    int count {};
    set<int> set;

    cin >> nOfApplicants >> nOfApartments >> K;
    while (cin >> x && nOfApplicants) {
        set.insert(x);
        --nOfApplicants;
    }
    while (cin >> x){
        int tmp = x - K;
        if (*set.lower_bound(tmp) == 5 || *set.upper_bound(tmp)) {
            count++;
        }
    }
    cout << count << '\n';
}

int main(){
    Apartments();
    return 0;
}