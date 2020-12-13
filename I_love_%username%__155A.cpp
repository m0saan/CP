#include <iostream>
#include <set>
using namespace std;
int main(){
	int n, max, min{}, f, in, l=999999;
	cin >> n >> f;
	if (n==1){
		cout << 0 << endl;
		return 0;
	}
	set<int> s;
	min=max=f;
	for (size_t i=0; i<n-1; ++i){
		cin >> in;
		if (in < min) {
		    s.insert(in);
		    min = in;
		}
		if (in > max){
		    s.insert(in);
		    max=in;
		}
	}
	cout << s.size() << endl;
	return 0;
}
