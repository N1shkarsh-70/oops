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

class C:public A {
    public:
        int dataC;
    C() {
        cout << "Constructor of C called" << endl;
        dataC = 0;
    };
};


class D:public B{
    public:
        int dataD;
    D() {
        cout << "Constructor of D called" << endl;
        dataD = 0;
    };
    void displayData() {
        cout << "Data from A: " << dataA << endl;
        cout << "Data from B: " << dataB << endl;
        cout << "Data from D: " << dataD << endl;
    }
};

class E:public C{
    public:
        int dataE;
    E() {
        cout << "Constructor of E called" << endl;
        dataE = 0;
    };
    void displayData() {
        cout << "Data from A: " << dataA << endl;
        cout << "Data from C: " << dataC << endl;
        cout << "Data from E: " << dataE << endl;
    }
};

int main() {
    cout << "Creating object of class D:" << endl;
    D d;
    d.displayData();

    E e;
    cout << "\nCreating object of class E:" << endl;
    e.displayData();

};