#include <iostream>
using namespace std;

class A {
    public:
        int dataA;
    A() {
        cout << "Constructor of A called" << endl;  
        dataA = 0;
    };
};

class B:public A {
    public:
        int dataB;
    B() {
        cout << "Constructor of B called" << endl;  
        dataB = 0;
    };
};

class C:public B {
    public:
        int dataC;
    C() {
        cout << "Constructor of C called" << endl;  
        dataC = 0;
    };
    void displayData() {
        cout << "Data from A: " << dataA << endl;
        cout << "Data from B: " << dataB << endl;
        cout << "Data from C: " << dataC << endl;
    }
};

int main() {
    C c;
    c.displayData();
    return 0;
}