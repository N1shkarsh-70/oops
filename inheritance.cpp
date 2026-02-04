#include <iostream>
#include <string>

using namespace std;

class Human{

   protected:
      int age;
   public:
      string name;

   Human(){
       cout << "Human constructor called" << endl;
   }
};

class Student: private Human{
      public:
         int rollno;
      
      Student(){
          cout << "Student constructor called" << endl;
      }


   void getinfo(int r, int a, string n){
       rollno = r;
       age = a;
       name = n;
   }
   void displayinfo(){
       cout << "Name: " << name << ", Age: " << age << ", Roll No: " << rollno << endl;
   }


};

int main() {

   Student s1;
   s1.getinfo(101, 20, "Nishkarsh");
   s1.displayinfo();
   // cout<<"Updated age: "<<s1.age<<endl;
   
   return 0;
}