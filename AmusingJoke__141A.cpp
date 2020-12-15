#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string in, sum;
	for (int i=0; i<2; ++i) { cin >> in; sum += in;}
	cin >> in;
	sort(in.begin(), in.end());
	sort(sum.begin(), sum.end());
	if (in.length() == sum.length() && in == sum) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
