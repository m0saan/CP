#include <fstream>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    ifstream fin("./teleport.in");
    ofstream fout("./teleport.out");
    int a,b,x,y;
    fin >> a >> b >> x >> y;
    auto ans = min( { abs(a-b), abs(a-x) + abs(b-y), abs(a-y) + abs(b-x)} );
    fout << ans;
    return 0;
}