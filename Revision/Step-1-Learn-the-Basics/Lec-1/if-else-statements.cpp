#include <iostream>
using namespace std;
int main() {

// Age //
/*
  int age;
  cout <<"enter age : ";
  cin >> age;

  if(age >= 18) {
    cout <<"You are adult \n";
  } else {
    cout <<"You are Not adult\n";
  }
 */

// Marks //
  
  int marks;
  cout <<"enter marks : ";
  cin >> marks;

  if(marks < 25) {
    cout << "Grade : F\n";
  }
  else if((marks >= 25) && (marks <= 44)) {
    cout << "Grade : E\n";
  }
  else if((marks >= 45) && (marks <= 49)) {
    cout << "Grade : D\n";
  }
  else if((marks >= 50) && (marks <= 59)) {
    cout << "Grade : C\n";
  }
  else if((marks >= 60) && (marks <= 69)) {
    cout << "Grade : B\n";
  }
  else if((marks >= 70) && (marks <= 100)) {
    cout << "Grade : A\n";
  }






  return 0;
}
