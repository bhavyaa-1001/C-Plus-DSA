#include<iostream>
using namespace std;


int main(){

class Solution { public: bool isPalindrome(string s) {
    int st=0;
    int e = s.size()-1; 
    while(st<=e){ 
        if(s[st] != s[e]){ 
            return 0; 
        } 
        else{ 
            st++; e--; 
        } 
    } 
    return 1;
 } 
}; 

}   