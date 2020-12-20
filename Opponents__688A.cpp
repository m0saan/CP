#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, d, count{}, ans{};
    cin >> n >> d;
    string s;
    for (int i=0; i<d; ++i) {
        cin >> s;
        if (s.find('0') != string::npos){
            count++;
            ans = max(ans , count);
        }else count = 0;
    }
    cout << ans << endl;
    return 0;
}