// Simple C++ example demonstrating multiple inheritance
// - Two base classes (`Printer`, `Scanner`) each provide functionality
// - `MultiFunctionDevice` inherits from both and resolves ambiguity

#include <iostream>
#include <string>

using namespace std;

class A{
    public:
        int dataA;

    A(){
        cout<<"Constructor of A called"<<endl;
    };
};

class B{
    public:
        int dataB;

    B(){
        cout<<"Constructor of B called"<<endl;
    };
};

class C : public A, public B {
    public:
        int dataC;

    C(){
        cout<<"Constructor of C called"<<endl;
    };

    C(int a, int b, int c) {
        dataA = a;
        dataB = b;
        dataC = c;
    }

    void displayData() {
        cout << "Data from A: " << dataA << endl;
        cout << "Data from B: " << dataB << endl;
        cout << "Data from C: " << dataC << endl;
    }
};

int main(){

    C c(10,20,30);
    c.displayData();
}