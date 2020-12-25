#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, c, L{}, R{}, tm{}, tm2{};
    cin >> n >> c;
    vector<int> scores(n);
    vector<int> t(n);
    for (int i = 0; i < n; ++i)
        cin >> scores[i];
    for (int i = 0; i < n; ++i)
        cin >> t[i];
    for (int i = 0, j=n-1; i < n; ++i, j--) {
        tm += t[i];
        tm2 += t[j];
        L += max(0,(scores[i]-c*tm));
        R += max(0,(scores[j]-c*tm2));
    }
    if (L>R) cout << "Limak" << endl;
    else if (L<R) cout << "Radewoosh" << endl;
    else cout << "Tie" << endl;
    return 0;
}