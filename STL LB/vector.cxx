#include <iostream>
#include<vector>
using namespace std;

int main() {

vector<int> a(5,1);

 for (int j : a) {
        cout << j << " ";
    }cout<<endl;

vector<int> v;

cout<<"Capacity:"<<v.capacity()<<endl;

v.push_back(1);
cout<<"Capacity:"<<v.capacity()<<endl;

v.push_back(2);
cout<<"Capacity:"<<v.capacity()<<endl;

v.push_back(3);
cout<<"Capacity:"<<v.capacity()<<endl;

v.push_back(7);
cout<<"Capacity:"<<v.capacity()<<endl;

cout<<"Size:"<<v.size()<<endl;

cout<<"Element at 2nd index is:"<<v.at(3)<<endl;

cout<<"Front:"<<v.front()<<endl;
cout<<"Back:"<<v.back()<<endl;

cout<<"Before Pop"<<endl;
for(int i:v){
    cout<<i<<"";
}cout<<endl;

v.pop_back();

cout<<"After Pop"<<endl;
for(int i:v){
    cout<<i<<"";
}cout<<endl;




}