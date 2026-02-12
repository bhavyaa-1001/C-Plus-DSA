#include <iostream>
using namespace std;

int main() {
    int rows = 3;

    // Create array of pointers
    int* arr[rows];

    // Different column sizes
    arr[0] = new int[3]{1, 2, 3};
    arr[1] = new int[2]{4, 5};
    arr[2] = new int[4]{6, 7, 8, 9};

    int sizes[] = {3, 2, 4};

    // Printing
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < sizes[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for(int i = 0; i < rows; i++) {
        delete[] arr[i];
    }

    return 0;
}
