#include<iostream>
#include<math.h>
using namespace std;

int binarytodecimal(string x){
        int length = x.length();
        int answer = 0;
        for (int i = 0; i < length; i++)
        {
            if(x[length-1-i] == '1'){
                answer = answer + pow(2,i);
            }
        }
        return answer;
}
int main(){
    string x;
    cin>>x;

    cout<<binarytodecimal(x)<<endl;


}