#include <iostream>
using namespace std;

void Pattern11(int n) {
    int start = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) start = 1;
        else start = 0;
        
        for (int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;
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
        Pattern11(n);
    }
}

// Optional Code 

// #include <iostream>
// using namespace std;

// void printBinaryTriangle(int n) {
//     for (int i = 0; i < n; i++) {
//         int start = (i % 2 == 0) ? 1 : 0;  

//         for (int j = 0; j <= i; j++) {
//             cout << start << " ";
//             start = 1 - start;  
//         }
//         cout << endl;  
//     }
// }

// int main() {
//     int n;
//     cout <<"enter n : ";
//     cin >> n;  

//     printBinaryTriangle(n);  

//     return 0;
// }
