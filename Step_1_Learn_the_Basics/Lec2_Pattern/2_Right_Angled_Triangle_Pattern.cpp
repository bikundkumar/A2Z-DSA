#include <bits/stdc++.h>
using namespace std;
                                         
void Pattern2(int N) {                                          
  for(int i = 0; i < N; i++) {

    for(int j = 0; j <= i; j++) {

      cout <<"* ";
    }
            
      cout << endl;                     
  }                                     
}

int main() {

  int N;;
  cout <<"Enter num : ";
  cin >> N;
  Pattern2(N);


  return 0;
}

// N = 5

// *
// * *
// * * * 
// * * * *
// * * * * *