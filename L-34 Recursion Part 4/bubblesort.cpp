#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){

    if(n == 0 || n == 1){
        return;
    }

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    BubbleSort(arr, n-1);
}

int main(){

    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
}