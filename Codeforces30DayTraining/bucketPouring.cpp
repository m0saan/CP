#include <vector>
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; // N of buckets
    cin >> N;

    vector<int> C(N), // Capacities of the buckets
    A(N); // Amount of water in each bucket
    for (int i = 0; i < N; ++i)
        cin >> C[i];
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    for (int i = 0; i < A.size() && i+1 < A.size(); ++i) {
        auto tmp = min(A[i], C[i + 1] - A[i + 1]);
        A[i] -= tmp;
        A[i+1] += tmp;
    }

    for(auto &elem : A){
        cout << elem << " "; // print the amount of water in each bucket at the end
    }
    cout << endl;
    return 0;
}