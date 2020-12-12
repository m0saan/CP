#include <iostream>
using namespace std;
int main(){
	int M,N, ans = 0, dmns = 0;
	cin >> M >> N;
	int total = M*N;
	while (dmns < total){
	    if (dmns+2 > total)
            break;
		dmns += 2;
		ans++;
	}
	cout << ans << endl;
	return 0;
}
