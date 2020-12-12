#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n%2) {
        cout << -1 << endl;
        return 0;
    }
    for (size_t i=1; i<=n; ++i){
		if (i%2==0) cout << i-1 << ' ';
		else cout << i+1 << ' ';
	}
    return 0;
}
