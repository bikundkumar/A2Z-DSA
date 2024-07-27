#include <iostream>
using namespace std;
int main() {

// Week Day //
  /*
  int Day;
  cout <<"enter day (1 - 7) : ";
  cin >> Day;

  switch(Day) {
    case 1: cout <<"Monday\n";
    break;

    case 2: cout <<"Tuesday\n";
    break;

    case 3: cout <<"Wednesday\n";
    break;

    case 4: cout <<"Thuresday\n";
    break;

    case 5: cout <<"Friday\n";
    break;

    case 6: cout <<"Saturday\n";
    break;

    case 7: cout <<"Sunday\n";
    break;

    default: cout <<"invalid day enter\n";
  }
  */

// sum two num //
  /*
  const int x = 10;
  const int y = 15;

  switch (x + y) {
    case 30: cout<<"Result is 30\n"; 
    break;

    case 25: cout <<"Result is 25\n";
    break;

    default: cout <<"No match found\n";
  }
 */
  
  // Grade //
  
  char Grade;
  cout <<"Enter Grade (A, B, C) : ";
  cin >> Grade;

  switch (Grade) {
    case 'a': case 'A': cout <<"Excellent\n";
    break;

    case 'b': case 'B': cout <<"Very Good\n";
    break;

    case 'c': case 'C': cout <<"Good\n";
    break;
    
    default : cout <<"Not specified\n";
  }
  


  return 0;
}
