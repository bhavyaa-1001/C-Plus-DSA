#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {10, 20, 30, 40, 50};

    // Name of the array gives the address of the first element
    cout << "Address of first element (arr): " << arr << endl;
    cout << "Address of first element (&arr[0]): " << &arr[0] << endl;

    // Pointer to the first element of the array
    int *ptr = arr;
    cout << "Value of ptr (address of first element): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;


    // Accessing other elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << *(ptr + i) << " at address " << (ptr + i) << endl;
    }

    cout << *arr << endl; // This will print the first element of the array (10)
    cout << *(arr + 1) << endl; // This will print the second element of the array (20)

    return 0;
}