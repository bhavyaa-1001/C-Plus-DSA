#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;


string decimaltobinary(int n){
    string ans = "";
    while (n!=0)
    {
        if(n%2 == 1){
            ans+="1";
        }
        else{
            ans+="0";
        }
        n = n/2;
    }
    reverse(ans.begin(), ans.end());
return ans;
}

int main(){
    int n ;
    cin>>n;

    cout<<decimaltobinary(n)<<endl;
}