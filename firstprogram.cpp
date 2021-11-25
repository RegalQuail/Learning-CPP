#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello World ! \n";
    cout << "I am learning C++ ! \n";

    int myNum = 15; // integer
    double myFloatNum = 3.14; // floating point number
    char myLetter = 'J'; // character
    string myText = "Hello"; // String (text)
    bool myBool = true; // boolean (true or false)

    int myAge = 17;
    cout << "I am " << myAge << " years old. \n";

    const float pi = 3.1415; // cannot be overridden, change
    const int minutesPerHour = 60;

    int x, y;
    int sum;

    cout << "Type a number: ";
    cin >> x;
    cout << "Type an other number: ";
    cin >> y;
    sum = x + y;
    cout << "The sum is: " << sum << "\n";


    // access the characters in a string:
    string myString = "Hello";
    cout << myString[0] << "\n"; // outputs H
    cout << myString[2] << "\n"; // outputs l

    // change string characters:
    myString[0] = 'J';
    cout << myString << "\n"; // outputs Jello

    string dumbPerson;
    cout << "Who is dumb: ";
    cin >> dumbPerson;
    if (dumbPerson == "Thomas") {
        dumbPerson = "Jonah";
        cout << dumbPerson << " is dumb !" << endl;
    } else {
        cout << dumbPerson << " is dumb !" << endl;
    }

    // user input strings
    // cin reads spaces as line breaks,
    // use the getline() function with corresponding parameters to get the entire string:
    string fullName;
    cout << "What is your name: " <<  endl;
    getline (cin, fullName); // Using getline() to read the whole string
    cout << "Your full name is: " << fullName << endl;

    return 0;
}
