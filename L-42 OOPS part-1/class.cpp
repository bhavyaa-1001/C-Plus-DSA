#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int age;
        int roll_no;

        void display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll No: " << roll_no << endl;
        }
};

int main(){
    Student s1;
    s1.name = "Alice";
    s1.age = 20;
    s1.roll_no = 101;

    s1.display();

    return 0;
}