#include <iostream>
using namespace std;

// Pass by reference : Change Original Value also 
// using & 

void DoSomething(int &num) {
  cout << num << endl;
  num += 5;
  cout << num << endl;
  num += 5;
  cout << num << endl;
  num += 10;
  cout << num << endl;
}
int main() {
  
  int num = 10;
  DoSomething(num);
  cout << num << endl;


  return 0;
}
