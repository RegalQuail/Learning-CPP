#include <iostream>
using namespace std;

int main() {

    int myArr[] = {11, 45, 62, 70, 88};

    cout << myArr[0] << endl; // 11
    cout << myArr[3] << endl; // 70
    cout << myArr[2] << endl; // 62

    myArr[2] = 42; // Assigning a new value to an element

    cout << myArr[2] << endl; // 42

    int myArray[5]; // array of 5 integers

    for (int x = 0; x < 5; x++) {
        myArray[x] = 42; // each element is assigned the value of 42
        cout << x << ": " << myArray[x] << endl;
        /*
            Output:

                0: 42
                1: 42
                2: 42
                3: 42
                4: 42
        */
    }

    // Calculating the sum of all elements of an array:
    int arr[] = {11, 35, 62, 555, 989};
    int sum = 0;

    for (int x = 0; x < 5; x++) {
        sum += arr[x];
    }

    cout << "The sum of the elements in arr: " << sum << endl;

    // Multi-dimensional arrays:

    int multiArr[2][3] = {
    {2, 3, 4}, // first row
    {8, 9, 10} // second row
    };

    // Elements are accessed using the row and column index:
    cout << multiArr[0][2] << endl; // 4

    return 0;
}
