//
// Created by moboustt on 19/2/2021.
//

#include <iostream>
#include <string>
#include <vector>

int main(){

    // Fast input-output
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string X{}, Y{};
    while (std::cin >> X >> Y) {
        std::size_t X1_len = X.length();
        std::size_t X2_len = Y.length();
        std::vector<int> v(X1_len+X2_len, 0);
        if (X1_len * X2_len == 0) { std::cout << "0" << std::endl; continue; }
        int k{};
        for (int i = 0; i < X1_len; ++i) {
            for (int j = 0; j < X2_len; ++j) {
                v[i+j] = (Y[j] - 48) * (X[i] - 48);
            }
        }
        for (auto &e : v)
            if (e!=0) std::cout << e;
        std::cout << std::endl;
    }
    return 0;
}