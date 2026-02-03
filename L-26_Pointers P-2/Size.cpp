#include <iostream>
using namespace std;

int main() {
    
    int arr[10];
    cout << "Size of entire array (arr): " << sizeof(arr) << " bytes" << endl;

    int *ptr = arr;
    cout << "Size of pointer (ptr): " << sizeof(ptr) << " bytes" << endl;
    return 0;
}