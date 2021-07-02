//
// Created by moboustt on 26/6/2021.
//

#include <iostream>

using namespace std;

int main()
{
	uint64_t a, b, c, d;
	cin >> a >> b >> c >> d;

	if (b >= c *d ) {
		cout << -1 << endl;
		return 0;
	}
	int i = 0;
	uint64_t cyan_sum = a;
	uint64_t red_sum = 0;
	while(cyan_sum > red_sum * d) {
		cyan_sum += b;
		red_sum += c;
		++i;
	}
	cout << i << endl;
}