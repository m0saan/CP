#include <iostream>

using namespace std;

int main(){
	int n{}, in{}, prev{}, ans=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> in;
		if (in != prev) ans++;
		prev = in;
	}
	cout << ans << endl;
	return 0;
}
