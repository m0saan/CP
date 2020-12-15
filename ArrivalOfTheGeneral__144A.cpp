#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main(){
	int n, min = 99999, max{}, fIndx, lIndx;
	cin >> n;
	vector<int> v(n);
	for (int i=0; i<n; ++i){
		cin >> v[i];
		if (v[i] > max) { 
			max = v[i];
			lIndx = i;
		}
		if (v[i] <= min) {
			min = v[i];
			fIndx = i;
		}
	}
	if (fIndx > lIndx){
		cout << n+lIndx-1 - fIndx << endl;
	}
	else{
		cout << n+lIndx-1 - fIndx - 1 << endl;
	}
	return 0;
}
