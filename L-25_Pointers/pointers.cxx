#include <iostream>
using namespace std;

int main() {
    
    int num = 5;
    cout << "Value of num: " << num << endl;

    //address of operator &
    cout << "Address of num: " << &num << endl;

    //pointer variable
    int *ptr = &num;
    cout << "Value of ptr (address of num): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}