#include <iostream>
using namespace std;
int main(){
	int n,P,V,T, ans{};
	cin >> n;
	for (size_t i=0; i<n; ++i){
		cin >> P >> V >> T;
		int sum = P+V+T;
		if (sum >= 2) ++ans;
	}
	cout << ans << endl;
	return 0;
}
