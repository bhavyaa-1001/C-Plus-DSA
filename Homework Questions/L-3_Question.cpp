// Find the Sum of all the even num till n 

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    int i = 0;
    while(i<=n){
        sum = sum + i;
        i = i+2;
    }
   
        cout<<"sum is "<<sum;
        
}