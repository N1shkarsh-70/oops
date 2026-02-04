#include<iostream>
#include<string>
using namespace std;

class BankAccount{

    protected:
        int accountNumber;
        string accountHolderName;
        double balance;
        string accountType;

    public:
        void CreateAccount(){
            cout << "Enter Account Number: ";
            cin >> accountNumber;
            cout << "Enter Account Holder Name: ";
            cout<<"Enter Account Type: "; 
            cin>>accountType;
            cin.ignore();
            getline(cin, accountHolderName);
            cout << "Enter Initial Balance: ";
            cin >> balance;
        }  
        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
            } else {
                cout << "Deposit amount must be positive!" << endl;
            }
        }
        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
                cout << "Withdrew: " << amount << ", New Balance: " << balance << endl;
            } else {
                cout << "Insufficient balance or invalid amount!" << endl;
            }
        }
        void displayAccountInfo(){
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Holder: " << accountHolderName << endl;
            cout << "Balance: " << balance << endl;
        }
};
class SavingsAccount:public BankAccount{
    private:
        double interestRate;
    public: 
        void calculateInterest(){
            double interest = balance * interestRate;
            cout << "Interest calculated: " << interest << endl;
        }
        void setInterestRate(double rate){
            interestRate = rate;
        }  

};





int main(){

    char choice;
    cout<<"bank management system";
    cout<<"\n\n\t\t\t\t======================\n";
    cout<<"\t\t\t\tBANK MANAGEMENT SYSTEM";
    cout<<"\n\t\t\t\t======================\n";
    cout<<"\t\t\t\t ::MAIN MENU::\n";
    cout<<"\n\t\t\t\t1. NEW ACCOUNT";
    cout<<"\n\t\t\t\t2. DEPOSIT AMOUNT";
    cout<<"\n\t\t\t\t3. WITHDRAW AMOUNT";
    cout<<"\n\t\t\t\t4. BALANCE ENQUIRY";
    cout<<"\n\t\t\t\t5. ALL ACCOUNT HOLDER LIST";
    cout<<"\n\t\t\t\t6. CLOSE AN ACCOUNT";
    cout<<"\n\t\t\t\t7. MODIFY AN ACCOUNT";
    cout<<"\n\t\t\t\t8. EXIT";
    cout<<"\n\n\t\t\t\tSelect Your Option (1-8): ";
    cin>>choice;
    BankAccount ac;
    do{
        switch(choice){
            case '1':
                ac.CreateAccount();
                break;
            case '2':
                   
        }
    }while(choice!='8');
}
