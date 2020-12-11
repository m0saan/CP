#include <iostream>
using namespace std;
int main() {
    int n, ans{};
    string passWord, SS;
    cin >> passWord >> n;
	bool c1 = false, c2 = false;
    for (int i = 0; i < n; ++i) {
        cin >> SS;
        if (!c1 && SS[0] == passWord.at(1)){
		   	ans++;
			c1 = true;
		}
        if (!c2 && SS[1] == passWord.at(0)){ 
			ans++;
			c2 = true;
		}
        if (ans == 2 || SS == passWord){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
