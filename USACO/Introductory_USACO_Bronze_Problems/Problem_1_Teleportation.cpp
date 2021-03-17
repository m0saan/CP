#include <fstream>
#include <iostream>
#include <algorithm>

int ARR[4];

int main(){

    std::ifstream fin("/Users/moboustt/Desktop/CP/USACO/Introductory_USACO_Bronze_Problems/teleport.in");
    std::ofstream fout("/Users/moboustt/Desktop/CP/USACO/Introductory_USACO_Bronze_Problems/teleport.out");
    for (int & i : ARR)
        fin >> i;
    int ss = abs(ARR[0] - ARR[1]);
    std::sort(ARR, ARR+4);
    int nSum{};
    nSum = abs(ARR[0] - ARR[1]) + abs(ARR[2] - ARR[3]);
    if (ss < nSum)
        fout << ss << std::endl;
    else
        fout << nSum << std::endl;
    return 0;
}