#include <iostream>
using namespace std;

void Pattern1(int n) {
  for (int i = 0; i <= 4; i++) {
    
    for (int j = 0; j <= 4; j++) {
      
      cout << "* ";
    }
    cout << endl;
  }
}

int main() {

  int n;
  cout <<"enter n : ";
  cin >> n;

  Pattern1(n);


  return 0;
}
