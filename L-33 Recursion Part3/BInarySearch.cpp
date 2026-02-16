#include<iostream>
using namespace std;

bool BinarySearch(int arr[], int s,int e, int key){
    if(s > e){
        return false;
    }
    int mid = s + (e-s)/2;

    if(arr[mid] == key){
        return true;
    }
    
    if(arr[mid] == key){
        return true;
    }
    else if(arr[mid] > key){
        return BinarySearch(arr, s, mid-1, key);
    }
    else{
        return BinarySearch(arr, mid+1, e, key);
    }
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 1;
    cout << "Key " << key << "  " << BinarySearch(arr, 0, n-1, key) << endl;

}