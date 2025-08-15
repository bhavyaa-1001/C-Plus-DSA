#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> myList;

    // Adding elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_front(5);

    // Displaying the elements of the list
    cout << "Elements in the list: ";
    for (int x : myList) {
        cout << x << " ";
    }
    cout << endl;

    // Removing an element from the list
    myList.remove(10);
    cout << "After removing 10, elements in the list: ";
    for (int x : myList) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Size of the list: " << myList.size() << endl;
    cout << "Is the list empty? " << (myList.empty() ? "Yes" : "No") << endl;

    return 0;
}