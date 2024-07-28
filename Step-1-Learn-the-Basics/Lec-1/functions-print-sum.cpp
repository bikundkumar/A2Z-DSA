#include <iostream>
using namespace std;

int sum(int x, int y) {
    int num3 = x + y;  // 5 + 6 = 11
    return num3;
}

int main() {


    int x, y;
    cin >> x >> y;
    int result = sum(x , y);
    cout << result<< endl;


  return 0;
}
