#include <iostream>
using namespace std;

// Pass by value : Original Value is not Change 

void DoSomething(int num) {
  cout << num << endl;  // 10
  num += 5;
  cout << num << endl; // 15
  num += 5;
  cout << num << endl; // 20
  num += 5;
  cout << num << endl; // 25

}

int main () {

  int num = 10;
  DoSomething(num);

  cout << num << endl; // 10

  return 0;
}
