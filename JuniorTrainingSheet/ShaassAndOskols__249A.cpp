#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n{}, m{}, p{}, which{};
	cin >> n;
	vector<int> v(n);
	for (int &i : v)
		cin >> i;
	
	cin >> m;
	for (size_t i{}; i<m; i++){
		cin >> p  >> which;
		int b = p - 2;
		int a = p;
		if (b >= 0)
			v[b] += abs(which - 1);
		if (a < v.size())
			v[a] += abs((v[p-1] - which));
		v[p-1] = 0;
	}
	for (const int &e : v)
		cout << e << endl;
	return 0;
}
