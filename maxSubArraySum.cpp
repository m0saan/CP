#include "bits/stdc++.h"

using namespace::std;

#define REP(i,a,b) for(i = a; i < b; i++);
#define NOW chrono::high_resolution_clock::now()
#define ELAPSED(S,E) chrono::duration_cast<chrono::milliseconds>(E - S).count();

template< typename Iter >
void fill_with_random_int_values( Iter start, Iter end, int min, int max)
{
    static std::random_device rd;    // you only need to initialize it once
    static std::mt19937 mte(rd());   // this is a relative big object to create

    std::uniform_int_distribution<int> dist(min, max);

    std::generate(start, end, [&] () { return dist(mte); });
}

template <typename T>
int maxSubarraySum1(const T& input){
    int best {};
    for (size_t i = 0; i < input.size(); ++i) {
        for (size_t j = i; j < input.size(); ++j) {
            int sum {};
            for (int k = i; k < j ; ++k)
                sum += input[k];
            best = max(best, sum);
        }
    }
    return best;
}

template <typename T>
int maxSubarraySum2(const T& input){
    int best {};
    for (int i = 0; i < input.size(); ++i) {
        int sum {};
        for (int j = i; j < input.size(); ++j) {
            sum += input[j];
            best = max(best, sum);
        }
    }
    return best;
}


template <typename T>
int maxSubarraySum3(const T& input){
    int best {}, sum{};
    for (int i = 0; i < input.size(); ++i) {
        sum = max(input[i], sum + input[i]);
        best = max(sum, best);
    }
    return best;
}

int main() {
    std::vector<int> v(1000, 0);

    fill_with_random_int_values(v.begin(), v.end(), -10000, 10000);

    auto s = NOW;
    std::cout << maxSubarraySum1(v) << std::endl;

    auto e = NOW;
    auto elapsed =  ELAPSED(s, e);
    std::cout << "Algo1: "<< elapsed << std::endl;

    s = NOW;
    std::cout << maxSubarraySum2(v) << std::endl;
    e = NOW;
    elapsed =  ELAPSED(s, e);
    std::cout << "Algo1: "<< elapsed << std::endl;

    s = NOW;
    std::cout << maxSubarraySum3(v) << std::endl;
    e = NOW;
    elapsed =  ELAPSED(s, e);
    std::cout << "Algo1: "<< elapsed << std::endl;

    return 0;
}
