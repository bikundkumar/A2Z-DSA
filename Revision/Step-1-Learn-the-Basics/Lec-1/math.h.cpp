#include <bits/stdc++.h>
using namespace std;

int maxx(int num1, int num2) {
  if(num1 >= num2) {
    return num1;
  } else {

  return num2;
  }
}


int main() {

  // Maximum number find using math.h library

  // int num1, num2;
  // cin >> num1 >> num2 ;
  // int maxi = max(num1, num2);

  // cout << num1 << " & " << num2 << " Maximum number is " << maxi << endl;
  
  int num1 , num2;
  cin >> num1  >> num2;
  int maxi = maxx(num1, num2);

  cout <<"Maximum number is : " << maxi << endl;






  return 0;
}
