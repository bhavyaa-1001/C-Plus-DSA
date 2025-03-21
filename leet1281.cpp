// Given an integer number n, return the difference between the product of its digits and the sum of its digits. 

#include <iostream>
using namespace std;

int main(){
    int prod = 1;
    int sum = 0;
    int n = 234;
    while (n!=0)
    {
        int rem = n%10;
        prod *= rem;
        sum += rem;
        n = n/10;
    }
    cout<<prod-sum;
    

}