#include<iostream>
using namespace std;

int main() {
    int i = 5;
    int &r = i; 
    cout << "Value of i: " << i << endl;
    cout << "Value via reference r: " << r << endl;
    cout << "Address of i: " << &i << endl;
    cout << "Address via reference r: " << &r << endl;

    r = 10;
    cout << "Value of i after modification through reference r: " << i << endl;

    return 0;
}