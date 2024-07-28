#include <iostream>
using namespace std;
int main() {

  // for(int i = 0; i < 10; i++) {
  //   cout <<"Hello Coders, this is the " << i <<"th iteration\n";
  // }

  // Factorial Program

  int i;
  int factorial  = 1;

  for(i = 5; i > 0; i--) {
    factorial *= i;
  }

  cout <<" Factorial of 5 is : " << factorial << endl;






  return 0;
}
