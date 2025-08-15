#include<iostream>
#include<queue>
using namespace std;    

int main() {
    queue<int> q;

    // Adding elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // Checking if the queue is empty
    cout << "Is the queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    // Adding more elements
    q.push(40);
    q.push(50);

    cout << "Front element after adding 40 and 50: " << q.front() << endl;

    return 0;
}