#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    char c;
    c = 'A';
    while (i<=n)
    {
        
        int j =1;
        while (j<=i)
        {
            
            cout<<c;
            c = c + 1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;

    }
    


}