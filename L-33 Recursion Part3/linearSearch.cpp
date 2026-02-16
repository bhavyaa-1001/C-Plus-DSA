#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n,int key){

    if(n == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        return linearSearch(arr+1, n-1, key);
    }


}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 9;
    cout << "Key " << key << "  " << linearSearch(arr, n, key) << endl;

}