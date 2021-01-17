#include <iostream>

using namespace std;

int main(){
    int nOfIngredients, h, n, c, total{};
    cin >> nOfIngredients;
    for (size_t i=0; i<nOfIngredients; ++i) {
        cin >> h >> n >> c;
        total += max(0, n - h) * c;
    }
    cout << total << endl;
    return 0;
}
