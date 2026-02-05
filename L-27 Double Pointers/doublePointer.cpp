#include <iostream>
using namespace std;

int main() {
    
    int i = 5;
    int *p = &i;
    int **pp = &p;
    cout << "Value of i: " << i << endl;
    cout << "Value via single pointer p: " << *p << endl;
    cout << "Value via double pointer pp: " << **pp << endl;
    cout << "Address of i: " << &i << endl;
    cout << "Address via single pointer p: " << p << endl;
    cout << "Address via double pointer pp: " << *pp << endl;

    

    cout << &p << endl;
    cout << "Address of double pointer pp: " << pp << endl;
    cout << "Address of double pointer pp: " << &pp << endl;


    return 0;
}