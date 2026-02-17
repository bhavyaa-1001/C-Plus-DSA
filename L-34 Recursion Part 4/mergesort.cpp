#include<iostream>
using namespace std;

void MergeSort(int arr[], int l, int r){

    if(l >= r){
        return;
    }

    int mid = l + (r-l)/2;

    MergeSort(arr, l, mid);
    MergeSort(arr, mid+1, r);

    int i = l;
    int j = mid+1;
    int k = 0;

    int temp[r-l+1];

    while(i <= mid && j <= r){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }

    while(i <= mid){
        temp[k++] = arr[i++];
    }

    while(j <= r){
        temp[k++] = arr[j++];
    }

    for(int i=l; i<=r; i++){
        arr[i] = temp[i-l];
    }
}

int main(){

    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    MergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
}