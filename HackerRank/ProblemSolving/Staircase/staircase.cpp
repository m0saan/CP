#include "../stdc++.h"

using namespace::std;

void staircase(int n) {
  for (int i = 0; i < n; i++){
    for (int k = 0; k < n - i; k++)
      cout << ' ';
    for (int j = 0; j <= i; j++ )
      cout << '#';
    cout << '\n';
  }

}

int main(){
  staircase(4);
  return 0;
}
