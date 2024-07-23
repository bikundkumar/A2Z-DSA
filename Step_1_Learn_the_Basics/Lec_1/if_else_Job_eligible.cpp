#include <bits/stdc++.h>
using namespace std;
int main() {

  int age;
  cout <<"Enter your age : ";
  cin >>age;

  if(age < 18) {
    cout <<"not eligible for job" << endl;
  }
  else if((age >= 18 ) && (age <= 54)) {
    cout <<"eligible for job" << endl;
  }
  else if((age >= 55) && (age <= 57)) {
    cout <<"eligible for job, but retirement soon" << endl;
  }
  else {
    cout <<"retirement time " << endl;
  }







  return 0;
}
