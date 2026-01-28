#include <iostream>
using namespace std;
#include <vector>

vector<int> wavePrint(int arr[][100], int rows, int cols) {
    vector<int> result;
    for (int j = 0; j < cols; j++) {
        if (j % 2 == 0) {
            // Traverse downwards
            for (int i = 0; i < rows; i++) {
                result.push_back(arr[i][j]);
            }
        } else {
            // Traverse upwards
            for (int i = rows - 1; i >= 0; i--) {
                result.push_back(arr[i][j]);
            }
        }
    }
    return result;
}

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
    vector<int> wave = wavePrint(arr, rows, cols);
    cout << "Wave Print: ";

    for (int val : wave) {
        cout << val << " ";
    }
    
    
}