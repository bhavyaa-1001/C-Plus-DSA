#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    char c;
    while (i<=n)
    {
        
        int j =1;
        while (j<=n)
        {
            c = 'A' + i+j-2;
            cout<<c;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;

    }
    


}