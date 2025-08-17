#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> myMap;

    // Adding elements to the map
    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";

    cout << "Map elements (in ascending order of keys):" << endl;
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Checking if the map is empty
    cout << "Is the map empty? " << (myMap.empty() ? "Yes" : "No") << endl;

    // Adding more elements
    myMap[4] = "Four";
    myMap[5] = "Five";

    cout << "Elements after adding 4 and 5:" << endl;
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Finding an element
    auto it = myMap.find(3);
    if (it != myMap.end()) {
        cout << "Element with key 3 found: " << it->second << endl;
    } else {
        cout << "Element with key 3 not found." << endl;
    }

    return 0;
}