#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	int n, m, I{},J{};
	string s;
	cin >> n >> m;
	for (size_t i=0; i<n; ++i){
		cin >> s;
		for (size_t j=0; j<m; ++j)
			if (s[j] == '*') {
			    I = I ^ i;
			    J = J ^ j;
			}
	}
	cout << I+1 << ' '<< J+1 << endl;
	return 0;
}
