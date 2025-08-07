#include <iostream>
#include <array>
using namespace std;

int main(){

    array<int, 4> arr = {1, 2, 3, 4};

    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    
    cout << " Element at index 2: " << arr.at(2) << endl;
    cout<< " Empty or not: " << arr.empty() << endl;

    cout << " First element: " << arr.front() << endl;
    cout << " Last element: " << arr.back() << endl;
   
    cout << " Max size: " << arr.max_size() << endl;
    cout << " Size: " << arr.size() << endl;
    return 0;

}