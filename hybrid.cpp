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

class D{
    public:
        int dataD;
    D() {
        cout << "Constructor of D called" << endl;  
        dataD = 0;
    };
};

class B:public A, public D {
    public:
        int dataB;
    B() {
        cout << "Constructor of B called with A and D" << endl;  
        dataB = 0;
    };

    void displayData() {
        cout << "Data from A: " << dataA << endl;
        cout << "Data from D: " << dataD << endl;
        cout << "Data from B: " << dataB << endl;
    }
};

class C:public A{
    public:
        int dataC;
    C() {
        cout << "Constructor of C called with A class" << endl;
        dataC = 0;
    };
    void displayData() {
        cout << "Data from A: " << dataA << endl;
        cout << "Data from C: " << dataC << endl;
    }
};

class E:public C{
    public:
        int dataE;
    E() {
        cout << "Constructor of E called with C class" << endl;
        dataE = 0;
    };
    void displayData() {
        cout << "Data from A: " << dataA << endl;
        cout << "Data from C: " << dataC << endl;
        cout << "Data from E: " << dataE << endl;
    }
};

class F:public C{
    public:
        int dataF;
    F() {
        cout << "Constructor of F called with C class" << endl;
        dataF = 0;
    };
    void displayData() {
        cout << "Data from A: " << dataA << endl;
        cout << "Data from C: " << dataC << endl;
        cout << "Data from F: " << dataF << endl;
    }
};

int main(){

    B b;
    b.displayData();

    F f;
    f.displayData();

    E e;
    e.displayData();
}