#include <iostream>
using namespace std;

// Sum of Two number 

  int Sum(int num1, int num2) {
    int num3 = num1 + num2;
    return num3;

  }
int main() {

  int num1, num2;

  cout <<"enter num1 : ";
  cin >> num1;

  cout <<"enter num2 : ";
  cin >> num2;

  int result =  Sum(num1, num2);
  cout << result << endl;



  return 0;
}
