#include<iostream>
using namespace std;

void update(int &i) {
    i++;
}

int main() {
    int i = 5;
    cout << "Value of i before update: " << i << endl;
    update(i);
    cout << "Value of i after update: " << i << endl;

    return 0;
}