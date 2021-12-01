#include <iostream>
using namespace std;

/*
    This is the general syntax of a function:

    return_type function_name( parameter list ) {
        body of the function
    }
*/

/*
    - return-type: Data type of the value returned by the function.
    - function name: Name of the function.
    - parameters: When a function is invoked, you pass a value to the parameter.
      This value is referred to as actual parameter or argument.
      The parameter list refers to the type, order, and number of the parameters of a function.
    - body of the function: A collection of statements defining what the function does.
*/
// Functions must be declared before being called
// Here's a function that doesn't return anything
void printSomething() {
    cout << "Hello There !" << endl;
}

/*
    A function declaration, or function prototype, tells the compiler about a function name
    and how to call the function. The actual body of the function can be defined separately.

    For example:
*/
// Function declaration:
void printSomethingElse();

int main() {
    // We call it in the main function
    printSomething();
    printSomethingElse();

    return 0;
}

// Function definition:
void printSomethingElse() {
    cout << "Hello World !" << endl;
}
/*
    Function declaration is required when you define a function in one source file
    and you call that function in another file. In such case, you should declare the function
    at the top of the file calling the function.
*/
