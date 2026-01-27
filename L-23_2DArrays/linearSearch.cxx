#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int rows, int cols){

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
            
        }
        
    }
    return 0;
    
}


int main(){

    int arr[3][4];

    // taking input in 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    // print 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
        
    }

    cout << "Enter the element to search " << endl;
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element found " << endl;
    }
    else{
        cout << "Element not found " << endl;
    }
    
}