#include <iostream>
using namespace std;

void HalfDiamondPattern(int N) {
    // Upper half including middle line
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }   
    // Lower half excluding middle line
    for (int i = N - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int N;

    cout << "Enter number: ";
    cin >> N;

    HalfDiamondPattern(N);

    return 0;
}
