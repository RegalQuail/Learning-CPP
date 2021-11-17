#include <iostream>
using namespace std;

int main() {

    int num = 1;
    int number;
    int total = 0;
    // While-loop
    while (num <= 5) {
        cin >> number;
        total += number;
        num++;
    }
    cout << "The sum is: " << total << endl;
    // For-loop
    for (int a = 0; a < 5; a++) {
        cout << a << endl;
    }

    int b = 0;
    // Do... while-loop
    do {
        cout << b << endl;
        b++;
    } while (b <= 8);

    // Switch statement
    int age = 42;
    switch (age) {
        case 16:
            cout << "Too young";
            break;
        case 42:
            cout << "Adult";
            break;
        case 70:
            cout << "Senior";
            break;
    }
    return 0;
}
