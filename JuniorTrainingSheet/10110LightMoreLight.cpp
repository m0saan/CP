#include <iostream>
#include <cmath>

using namespace std;

int main(){

    // Fast input-output
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    long long in, sq;
    while (cin >> in && in!=0) {
        sq = (int) sqrt(in);
        if (sq * sq == in) std::cout << "yes" << std::endl;
        else std::cout << "no" << std::endl;
    }
    return 0;
}