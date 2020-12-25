#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n,k,ans{}, in;
	cin >> n >> k;
	vector<int> v(n);
	for (int &i: v)
		cin >> i;
	int kTH = v.at(k - 1);
	for_each(v.begin(), v.end(), [&ans, &kTH](int &v){if (v >= kTH && v > 0) ans++;});
	cout << ans << endl;
	return 0;
}
