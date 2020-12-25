#include <iostream>
using namespace std;
int main(){
	int w;
	cin >> w;
	if (w <= 2){
		cout << "NO" << endl;
		return 0;
	}
	cout << ((w%2==0) ? "YES" : "NO") << endl;
	return 0;
}
