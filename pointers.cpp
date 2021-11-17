#include <iostream>
using namespace std;

int main() {

    /*
        Every variable is a memory location, which has its address defined.
        That address can be accessed using the ampersand (&) operator
        (also called the address-of operator), which denotes an address in memory.

        For example:
    */
    int score = 5;
    cout << &score << endl; // outputs the memory address, which stores the variable score

    /*
        A pointer is a variable, with the address of another variable as its value.
        In C++, pointers help make certain tasks easier to perform. Other tasks,
        such as dynamic memory allocation, cannot be performed without using pointers.

        All pointers share the same data type -
        a long hexadecimal number that represents a memory address.
    */
    /*
        A pointer is a variable, and like any other variable, it must be declared before you can work with it.
        The asterisk sign is used to declare a pointer (the same asterisk that you use for multiplication),
        however, in this statement the asterisk is being used to designate a variable as a pointer.
        Following are valid pointer declarations:
    */
    int *ip; // pointer to an integer
    double *dp; // pointer to a double
    float *fp; // pointer to a floating point number
    char *cp; // pointer to a character

    // Here, we assign the address of a variable to the pointer:
    int scoreSecond = 5;
    int *scoreSecondPtr;
    scoreSecondPtr = &scoreSecond;

    cout << scoreSecondPtr << endl;

    /*
    There are two operators for pointers:
        Address-of operator (&):
        - returns the memory address of its operand.
        Contents-of (or dereference) operator (*):
        - returns the value of the variable located at the address specified by its operand.
    */

    // For example:
    int var = 50;
    int *p;
    p = &var;

    cout << "Value of var: " << var << endl; // outputs 50 (the value of var)
    cout << "var's memory location: " << p << endl; // outputs 0x61fe04 (var's memory location)
    cout << "The value of the variable stored in the pointer p: " << *p << endl;
    // outputs 50 (the value of the variable stored in the pointer p)

    /*
        The asterisk (*) is used in declaring a pointer for the simple purpose of indicating that it is a pointer
        (The asterisk is part of its type compound specifier). Don't confuse this with the dereference operator,
        which is used to obtain the value located at the specified address.
        They are simply two different things represented with the same sign.
    */

    /*
        The dereference operator (*) is basically an alias
        for the variable the pointer points to.
        For example:
    */

    int x = 5;
    int *p = &x;

    x = x + 4;
    x = *p + 4;
    *p = *p + 4;

    // All three of the preceding statements are equivalent, and return the same result.
    // We can access the variable by dereferencing the variable's pointer.

    return 0;
}
