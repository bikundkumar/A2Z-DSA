#include <iostream>
using namespace std;

/* void doSomething(string &s) {
  s[5] = 't';
  cout << s << endl;
}

int main() {

  string s = "Bikund";
  doSomething(s);
  cout << s << endl; */

void doSomething(int &num) {
  cout << num << endl;
  num += 5;
  cout << num << endl;
  num += 5;
  cout << num << endl;
}

int main() {

  int num = 10;
  doSomething(num);
  cout << num << endl;

  return 0;
}
