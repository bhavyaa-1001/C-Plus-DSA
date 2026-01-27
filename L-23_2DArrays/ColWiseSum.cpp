#include <iostream>
using namespace std;




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
    // column wise sum
    for (int j = 0; j < 4; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of column " << j << " is " << sum << endl;
        
    }
}