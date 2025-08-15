#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Pushing elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack elements: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    // Checking if the stack is empty
    cout << "Is the stack empty? " << (s.empty() ? "Yes" : "No") << endl;

    // Pushing more elements
    s.push(40);
    s.push(50);

    cout << "Top element after pushing 40 and 50: " << s.top() << endl;

    return 0;
}