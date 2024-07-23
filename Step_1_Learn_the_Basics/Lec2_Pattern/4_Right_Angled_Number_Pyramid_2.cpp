#include <bits/stdc++.h>
using namespace std;

void Pattern4(int n) {
  for(int i = 1; i <= n; i++){

    for(int j = 1; j <= i; j++) {
      cout << i <<" ";
    }
    cout << endl;
  }
} 
int main() {

  int n;
  cout <<"Enter num : ";
  cin >> n;
  Pattern4(n);

  return 0;
}

// N = 4;

// 1 
// 2 2
// 3 3 3
// 4 4 4 4 
//

