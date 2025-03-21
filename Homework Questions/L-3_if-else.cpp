#include<iostream>
using namespace std;

int main(){
    char ch;

    cin>>ch;

    if(ch>='A'&& ch<='Z'){

        cout<<"This is the Upper case value:"<<ch<<endl;

    }

   else if(ch>='a'&&ch<='z'){

        cout<<"this is lower case letter: "<<ch<<endl;

    }

    else if(ch>='0'&&ch<='9'){

cout<<"It's an integer digit:"<<ch<<endl;

    }
}