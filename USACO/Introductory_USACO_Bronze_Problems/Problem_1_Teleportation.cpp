#include <fstream>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    ifstream fin("./teleport.in");
    ofstream fout("./teleport.out");
    int a,b,x,y;
    fin >> a >> b >> x >> y;
    auto cc = abs(min(x,y) - a);
    fout << min(abs(a-b), cc+abs(max(x,y)-b));
    return 0;
}