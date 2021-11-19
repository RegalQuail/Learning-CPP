#include <iostream>
using namespace std;

int main() {

    /*
        The sizeof operator can be used to get a variable or data type's size, in bytes.
        It determines and returns the size of either a type or a variable in bytes.
    */
    // For example:
    cout << "char: " << sizeof(char) << " bytes" << endl; // 1
    cout << "int: " << sizeof(int) << " bytes" << endl; // 4
    cout << "float: " << sizeof(float) << " bytes"  << endl; // 4
    cout << "double: " << sizeof(double) << " bytes" << endl; // 8
    int var = 50;
    cout << "var: " << sizeof(var) << " bytes" << endl; // 4

    // The sizeof() operator is also used to determine the size of an array:
    double myArr[10];
    cout << sizeof(myArr) << endl; // 80
    /*
        On this machine, double takes 8 bytes. The array stores 10 doubles,
        so the entire array occupies 80 (8*10) bytes in the memory.

        In addition, divide the total number of bytes in the array by the number
        of bytes in a single element to learn how many elements you have in the array.
    */
    int numbers[100];
    cout << sizeof(numbers) / sizeof(numbers[0]) << endl; // 100

    return 0;
}
