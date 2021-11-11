#include <iostream>
using namespace std;

int main(){
    cout << "Hello World ! \n";
    cout << "I am learning C++ ! \n";

    int myNum = 15; // integer
    double myFloatNum = 3.14; // floating point number
    char myLetter = 'J'; // character
    string myText = "Hello"; // String (text)
    bool myBool = true; // boolean (true or false)

    int myAge = 17;
    cout << "I am " << myAge << " years old. \n";

    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << "Sum = " << sum << "\n";

    const float pi = 3.1415; // cannot be overridden, change
    const int minutesPerHour = 60;

    int a, b;
    int calcSum;

    cout << "Type a number: ";
    cin >> a;
    cout << "Type an other number: ";
    cin >> b;
    sum = a + b;
    cout << "The sum is: " << calcSum;

    return 0;
}
