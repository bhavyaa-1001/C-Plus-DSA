#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    vector<int> v;

    // Adding elements to the vector
    v.push_back(30);
    v.push_back(2);
    v.push_back(4);
    v.push_back(1);

    cout << binary_search(v.begin(), v.end(), 4) << endl; // Output: 0 (false)
    cout << "Lower bound of 4: " << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl; // Output: 2
    cout << "Upper bound of 4: " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl; // Output: 3



}