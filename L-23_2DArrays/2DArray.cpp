#include <iostream>
using namespace std;

int main(){

    int rows, cols;
    cin >> rows >> cols;

    int arr[100][100];

    // taking input in 2D array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    // print 2D array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
        
    }
    
}