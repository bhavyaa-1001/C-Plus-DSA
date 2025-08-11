#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fibonaaci = 0, first = 0, second = 1;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            fibonaaci = first;
        } else if (i == 1) {
            fibonaaci = second;
        } else {
            fibonaaci = first + second;
            first = second;
            second = fibonaaci;
        }
        cout << fibonaaci << " ";
    }

    
    return 0;
}