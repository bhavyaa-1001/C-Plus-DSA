#include<iostream>
#include<cstring>
using namespace std;

int getLength(char str[]){
    int length = 0;
    for(int i=0; str[i]!='\0'; i++){
        length++;
    }
    return length;
}

int main(){

    char str[30];
    cout<<"Enter your name: ";
    cin>>str;

    cout<<"Your name is: "<<str<<endl;

    cout<<"Length of your name is: "<<getLength(str)<<endl;




}