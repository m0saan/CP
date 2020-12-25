#include <iostream>
using namespace std;
int a[101][101];
int main(){
	int in, n, ans{};
	cin >> n;
	int md = (n-1) / 2;
	for (size_t i=0; i<n; ++i)
		for (size_t j=0; j<n; ++j)
			cin >> a[i][j];
	for (int i=0; i<n; i++)
		ans += a[i][i];
	for (int i=0; i<n; i++)
		ans += a[i][md];
	for (int i=0; i<n; i++)
		ans += a[md][i];
	for (int i=0, j=n-1; i<n; i++, j--)
		ans += a[i][j];
	ans -= (a[md][md] *3);
	cout << ans << endl;
	return 0;
}
