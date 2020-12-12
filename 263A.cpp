#include <iostream>
#include <vector>
using namespace std;
int I,J,ans,a[5][5];
int main(){
    for (size_t i=0; i<5; ++i){
        for (size_t j=0; j<5; ++j){
            cin >> a[i][j];
			if (a[i][j] == 1) {I=i, J=j;};
        }
    }
	ans = abs(I-2) + abs(J-2);
	cout << ans << endl;
    return 0;
}
