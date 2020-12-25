#include <iostream>
using namespace std;

int main(){
	int  n,k, ans{};
	cin >> n >> k;
	int tmp {}, c, i;

	for (i=0; i < n; ++i){
		cin >> c;
		c += tmp;
		tmp = 0;
		if (c > 8){
			tmp = c - 8;
			c = 8;
		}
		if (ans < k)
		   	ans += c;
		if (ans >= k){
			cout << i + 1 << endl;
			return 0;
		}
	}
	if (ans >= k)
		cout << i << endl;
	else cout << -1 << endl;
	return 0;
}
