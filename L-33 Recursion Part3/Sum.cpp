#include<iostream>
using namespace std;

int sum(int arr[], int size){
    if(size == 0){
        return 0;
    }
    return arr[0] + sum(arr+1, size-1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array elements is: " << sum(arr, n) << endl;
    return 0;
}