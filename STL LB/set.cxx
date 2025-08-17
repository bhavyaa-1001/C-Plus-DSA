#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet;

    // Adding elements to the set
    mySet.insert(30);
    mySet.insert(10);
    mySet.insert(20);

    cout << "Set elements (in ascending order): ";
    for (const auto& elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;

    // Checking if the set is empty
    cout << "Is the set empty? " << (mySet.empty() ? "Yes" : "No") << endl;

    // Adding more elements
    mySet.insert(40);
    mySet.insert(50);

    cout << "Elements after adding 40 and 50: ";
    for (const auto& elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;

    set<int>::iterator it = mySet.find(20);
    if (it != mySet.end()) {
        cout << "Element 20 found in the set." << endl;
    } else {
        cout << "Element 20 not found in the set." << endl;
    }

    return 0;
}