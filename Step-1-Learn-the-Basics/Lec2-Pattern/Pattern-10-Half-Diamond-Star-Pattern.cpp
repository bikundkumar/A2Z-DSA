#include <iostream>
using namespace std;

void Pattern10(int n) {
  for (int i = 1; i <= 2 * n; i++) {
      int stars = i;
    if (i > n) stars = 2 * n - i;
    for (int j = 1; j <= stars; j++) {
      cout << "*";
    }
    cout << endl;
  }
}
int main() {
  int t;
  cout <<"enter t : ";
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cout <<"enter n : ";
    cin >> n;
    Pattern10(n);
  }


  return 0;
}

// Optional Program

// #include <iostream>
// using namespace std;

// void printTriangle(int n) {
   
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }

    
//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout <<"enter n : ";
//     cin >> n;  
//     printTriangle(n);  
//     return 0;
// }

