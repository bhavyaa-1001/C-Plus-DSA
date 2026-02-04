#include<iostream>
using namespace std;

void update(int *p) {
    // Increment the value at the address pointed to by p
    (*p)++;
}

int getSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int num = 10;
    int *p = &num;
    cout << "Before update: " << num << endl;

    // Call the update function with the address of num
    update(p);

    cout << "After update: " << num << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    cout << "sum is: " << getSum(arr,5) << endl;

    return 0;
}