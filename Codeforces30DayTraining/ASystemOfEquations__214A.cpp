#include <iostream>
using namespace std;

int main(){
	int n,m,sum, ans{};
	cin >> n >> m;
	sum = m+n;
	for (size_t i=0; i<sum; ++i){
		for (size_t j=0; j<sum; j++){
			if ((i*i) + j == n && i + (j*j) == m) ans++;
		}
	}
	cout << ans << endl;
	return 0;
}

