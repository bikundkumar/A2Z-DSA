#include <iostream>
using namespace std;
int main() {

// Specific Number Print 

  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int target = 1;

  for (int num : numbers) {
    if (num == target) {
      cout << "Target found : " << target << endl;
      break;
    }
    cout << "Checking : " << num << endl;
  }

//  Odd number find 

  for (int num : numbers) {
    if (num % 2 == 0) {
      continue;
    }
    cout <<"Odd number : " << num << endl;
  }


  return 0;
}
