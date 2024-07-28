#include <iostream>
using namespace std;
int main() {

  // Print Name 

  // int i = 0;
  // while(i < 5) {
  //   cout <<"Bikund Kumar\n";
  //   i++;
  // }

  //Factorial program 

  int n = 5;
  int factorial = 1;
  
  while(n > 0) {
    factorial *= n;
    n--;
  }

  cout << "factorial of 5 is : " << factorial << endl;



  return 0;
}
