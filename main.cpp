#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Even numbers from 0 to " << num << ": ";

    for (int i = 0; i <= num; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
