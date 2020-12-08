#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;
    char ch = 'A';
    int ans, counter{};
    for (const auto& d : str){
        if (d == ch){
            ++counter;
            ans = max(ans, counter);
        } else {
            ch = d;
            counter = 1;
        }
    }
    cout << ans << ' ';
    return 0;
}