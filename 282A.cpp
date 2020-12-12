#include <iostream>
#include <string>
using namespace std;
int main(){
	int n, ans{};
	cin >> n;
	string in;
	for (size_t i=0; i<n; ++i){
		cin >> in;
		if (in[0] == '+' || in.at(in.size()-1) == '+') ans++;
		else ans--;
	}
	cout << ans << endl;
	return 0;
}
