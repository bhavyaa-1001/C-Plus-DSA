#include<iostream>
using namespace std;

void ReverseStrting(int i , int j, string& s){

    if(i>j){
        return;
    }

    swap(s[i], s[j]);
    i++;
    j--;
    ReverseStrting(i, j, s);



}

int main(){

    string s = "Hello World";
    int n = s.length();

    ReverseStrting(0, n-1, s);
    cout << s << endl;
    

}