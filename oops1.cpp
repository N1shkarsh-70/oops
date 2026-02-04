#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        int rollno=1;
        string name="nishkarsh";
        int marks=45;
};
class Car{
    public:
        string brand;
        string model;
        int year;
    int setinfo(string b, string m, int y){
        brand = b;
        model = m;
        year = y;
        return year;
    }
    int getinfo(){
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
        return year;
    }
};

class Employee{

    private:
        int bonus=500;
    public:
        int empid;
        string empname;
        int salary;
    Employee(){
        cout<<"Employee detailes are as follows:"<<endl;
    }

    Employee(int empid, string empname, int salary){
        this->empid = empid;
        this->empname = empname;
        this->salary = salary;
        this->bonus = bonus;
    }
    void display(){
        cout<<"Employee ID: "<<empid<<endl;
        cout<<"Employee Name: "<<empname<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
        cout<<"Employee Bonus: "<<bonus<<endl;
    }
    ~Employee(){
        cout<<"Destructor called for Employee: "<<empname<<endl;
    }
        
};
int main() {

    // Student s1;
    // cout << s1.rollno << " " << s1.name << " " << s1.marks << endl;

    // Car car1;
    // car1.setinfo("Toyota", "Corolla", 2020);
    // car1.getinfo();


    Employee e1(101, "John Doe", 50000);    
    e1.display();
    return 0;
};