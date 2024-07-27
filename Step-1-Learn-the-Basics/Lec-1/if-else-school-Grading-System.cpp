#include <bits/stdc++.h>
using namespace std;
int main() {

  int marks;
  cout <<"enter your marks : ";
  cin >>marks;

  if(marks < 25) {
    cout <<"your marks is : " << marks << ", Grade is : F" << endl;
  }
  else if((marks >= 80) && (marks <= 100)) {
    cout <<"your marks is : " << marks << ", Grade is : A" << endl;
  }
  else if((marks >= 60) && (marks <= 79)) {
    cout <<"your marks is : " << marks << ", Grade is : B" << endl;
  }
  else if((marks >= 50) && (marks <= 59)) {
    cout <<"your marks is : " << marks << ", Grade is : C" << endl;
  }
  else if((marks >= 45) && (marks <= 49)) {
    cout <<"your marks is : " << marks << ", Grade is : D" << endl;
  }
  else if((marks >= 25) && (marks <= 44)) {
    cout <<"your marks is : " << marks << ", Grade is : E" << endl;
  } else {
    cout <<"Incorrect marks entered " << endl;
  }


  return 0;
}
