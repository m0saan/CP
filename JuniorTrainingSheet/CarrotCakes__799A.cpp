#include <iostream>
using namespace std;

int main(){
	int n{}, t{}, k{}, d{};
	cin >> n >> t >>  k >> d; 
	if (( ( d / t + 1 ) * k) >= n) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}
