#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;
    cout << "Size of vector: " << v.size() << endl;

    v.push_back(10);
    cout << "Size of vector after push_back: " << v.size() << endl;
    cout << "Capacity of vector: " << v.capacity() << endl;

}