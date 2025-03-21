#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    char s = 'A';
    
    while (i<=n)
    {
        
        int j =1;
        while (j<=n)
        {
            cout<<s<<" ";
            j = j + 1;
            s +=1;
        }
        cout<<endl;
        i = i + 1;

    }
    


}