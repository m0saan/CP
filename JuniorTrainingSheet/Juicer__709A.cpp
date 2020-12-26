#include <iostream>

using namespace std;

int main(){
	int n{},b{},d{}, total{}, ans{}, in{};
	cin >> n >> b >> d;
	for (int i=0; i<n; ++i){
		cin >> in;
		if (in > b) continue;
		total += in;
		if (total > d) { ans++; total = 0;}
	}
	cout << ans << endl;
	return 0;
}
