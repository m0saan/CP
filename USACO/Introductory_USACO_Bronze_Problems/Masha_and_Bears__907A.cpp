//
// Created by Mohammad  Boustta on 2/25/21.
//

#include <iostream>
#include <>


using namespace std;

int main(){
    int  V1, V2, V3, Vm;
    cin >> V1 >> V2 >> V3 >> Vm;
    if ((V1 < V2 || V2 < V3) || 2*V2) {
        std::cout << -1 << endl;
        return 0;
    }

    return 0;
}

// each bear likes its car, so size of i-th car is no more than 2·Vi;