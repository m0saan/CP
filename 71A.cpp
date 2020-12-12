#include <iostream>
#include <string>
using namespace std;
int main(){
	string in;
	int n;
	cin >> n;
	for(size_t i=0; i<n; ++i){
		cin >> in;
		if (in.size() > 10) cout << in[0] + to_string(in.size() - 2) + in[in.size()-1] << endl;
		else cout << in << endl;
	}
	return 0;
}
