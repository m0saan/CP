#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
	int t, n, in;
	cin >> t;
	set<int> set;
	for (int i=0; i<t; i++){
		cin >> n;
		vector<int> v;
		for (int j=0; j<n; ++j){ 
			cin >> in;
			if (!set.count(in)) v.push_back(in);
			else set.insert(in);
		}
		for (int &e : v)
			cout << e << ' ';
		cout << endl;
	}
	cout << "------------------------------------" << endl;
	return 0;
}
