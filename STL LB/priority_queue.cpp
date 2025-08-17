#include<iostream>
#include<queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    // Adding elements to the priority queue
    pq.push(30);
    pq.push(10);
    pq.push(20);

    cout << "Priority Queue elements (in descending order): ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // Checking if the priority queue is empty
    cout << "Is the priority queue empty? " << (pq.empty() ? "Yes" : "No") << endl;
    // Adding more elements
    pq.push(40);
    pq.push(50);

    cout << "Top element after adding 40 and 50: " << pq.top() << endl;

    return 0;
}