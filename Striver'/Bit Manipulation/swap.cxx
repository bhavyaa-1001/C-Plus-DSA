#include<iostream>
using namespace std;

int swap(int a, int b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<a<<" "<<b<<endl;
}

int main(){
    int a, b;
    cin>>a>>b;

    swap(a,b);
}