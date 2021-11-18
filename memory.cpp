#include <iostream>
using namespace std;

int main() {

    /*
        In a C++ program, memory is divided into two parts:
        The stack: All of your local variables take up memory from the stack.
        The heap: Unused program memory that can be used when the program runs
        to dynamically allocate the memory.

        Many times, you are not aware in advance how much memory you will need
        to store particular information in a defined variable
        and the size of required memory can be determined at run time.
        You can allocate memory at run time within the heap for the variable of a given type
        using the new operator, which returns the address of the space allocated.
    */

    new int; // This allocates the memory size necessary for storing an integer on the heap, and returns that address.
    // The allocated address can be stored in a pointer, which can then be dereferenced to access the variable.

    int *p = new int;
    *p = 5; // dynamically allocated memory for an integer, and assigned it a value of 5.

    /*
        For local variables on the stack, managing memory is carried out automatically.
        On the heap, it's necessary to manually handle the dynamically allocated memory,
        and use the delete operator to free up the memory when it's no longer needed.
    */

    // This statement releases the memory pointed to by pointer.
    int *pointer = new int; // request memory
    *pointer = 5; // store value

    cout << *pointer << endl; // use value

    delete pointer; // free up the memory

    // Pointers that are left pointing to non-existent memory locations are called dangling pointers.
    // now pointer is a dangling pointer

    pointer = new int; // reuse for a new address

    /*
        Forgetting to free up memory that has been allocated
        with the new keyword will result in memory leaks,
        because that memory will stay allocated until the program shuts down.

        The NULL pointer is a constant with a value of zero
        that is defined in several of the standard libraries, including iostream.
        It is a good practice to assign NULL to a pointer variable when you declare it,
        in case you do not have an exact address to be assigned. A pointer assigned NULL
        is called a null pointer. For example: int *ptr = NULL;
    */

    // Dynamic memory can also be allocated for arrays:

    int *ptr = NULL; // pointer initialized with NULL
    ptr = new int[20]; // request memory
    delete [] ptr; // Delete array pointed to by ptr

    /*
        Dynamic memory allocation is useful in many situations,
        such as when your program depends on input.
        As an example, when your program needs to read an image file,
        it doesn't know in advance the size of the image file
        and the memory necessary to store the image.
    */

    return 0;
}
