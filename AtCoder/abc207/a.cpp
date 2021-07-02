//
// Created by moboustt on 26/6/2021.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr+3);
	cout << arr[2] + arr[1] << endl;
	return (0);
}