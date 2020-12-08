#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int nOfChilds;
    int maxWeight;
    int nOfGen {};

    cin >> nOfChilds >> maxWeight;
    multiset<int> s;

    int x;
    int counter = 0;
    // 10 9 7 10 9 8 5 6 6 5
    while (cin >> x)
        s.insert(x);
    for (auto v : s){
      if (v == maxWeight) {
          nOfGen++;
          continue;
      }
      counter += v;
      if(counter == maxWeight) {
          nOfGen++;
          counter = 0;
      }
      if (counter + v > maxWeight){
          nOfGen++;
          counter = v;
      }
    }

    if (counter != 0)
        nOfGen++;
    cout << nOfGen << '\n';
}