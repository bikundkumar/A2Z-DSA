#include <bits/stdc++.h>
using namespace std;
int main() {

  int age;
  cout <<"Enter your age : ";
  cin >>age;

  if(age < 18) {
    cout <<"Not eligible for job " << endl;
  }
  else if(age <= 57) {
    cout <<"eligible for job ";
    if(age >= 55) {     // using second conditions is nested if else //
      cout <<", but retirement soon" << endl;
    }
  }
  else{
    cout <<"retirement time " << endl;
  }









  return 0;
}
