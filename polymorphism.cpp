#include <iostream>
using namespace std;        



int showMessage() {
    cout << "Base class function called." << endl; 
    return 0;
}
class Base{
    public:
        int value;


    Base(){
        value=0;
    };    
    Base(int val){
        value=val;
    };
    void add(){

        cout<<"Base class add function called"<<endl;
    }
    void add(int a, int b){
        cout<<"Base class add function with parameters called: "<<a+b<<endl;
    }
    void add(int a, int b, int c){
        cout<<"Base class add function with single parameter called: "<<a+b+c<<endl;
    }
    void add(double a, double b){
        cout<<"Base class add function with double parameters called: "<<a+b<<endl;
    }

    int operator +(int val){
        return val + 10;
    }
    Base operator + (Base obj) {
        return Base(value + obj.value);
    }
    void operator =(Base obj){
        cout<<"Assignment operator overloaded"<<endl;
    }
};
class Students{
    public:
        int marks;
    Students(int m=0){
        marks=m;
    }

    Students operator ==(Students s){
        if(this->marks == s.marks){
            cout<<"Marks are equal"<<endl;
        }   
        else{
            cout<<"Marks are not equal"<<endl;
        }
    }
};



int main() {
    
    // int a=showMessage();
    // cout<<a;



    // Base obj(5);
    // Base obj2(15);
    // Base obj3 = obj + obj2; // Using overloaded + operator for objects
    // cout << "Result of overloaded + operator for objects: " << obj3.value << endl;
    // obj = obj2; // Using overloaded = operator

    // obj.add();
    // obj.add(10,20);
    // obj.add(10,20,30);
    // obj.add(10.5,20.5);
    // int result = obj + 5; // Using overloaded + operator
    // cout << "Result of overloaded + operator: " << result << endl;


    cout<<"comparing students objects"<<endl;
    Students s1(85);
    Students s2(90);
    s1 == s2; // Using overloaded == operator
    return 0;
}