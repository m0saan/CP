#include <vector>
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int r,s; // Boob x & y B(r,s)
    cin >> r >> s;
    int M, N, P, Q;
    cin >> M >> N >> P >> Q;


    int ax = 0, ay = 0; // Init alice's x & y
    int bx = r, by = s; // Init bob's x & y
    int t{}; // Time tracker
    while (ax < bx && ay < by) {
        ax += M;
        ay += N;
        bx -= P;
        by -= Q;
        t++;
    }
    if (ax == bx && ay == by)
        cout << t << endl;
    else
        cout << -1 << endl;
}