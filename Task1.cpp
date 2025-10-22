#include<iostream>
using namespace std;

class BankAccount
{
private: 
	const int accountNumber;
    double balance;

public:
    BankAccount() : accountNumber(0), balance(0.0) {}
    BankAccount(int a, double bal) : accountNumber(a), balance(bal) {}
    BankAccount(const BankAccount& other) : accountNumber(other.accountNumber), balance(other.balance) {}
    void setbalance(double bal)
    {
        balance = bal;
    }
    int getacountNumber()
    {
        return accountNumber;
    }
    double getbalance()
    {
        return balance;
    }
    void deposit(double ammount)
    {
        if (ammount >0)
        {
            balance += ammount;
            cout << "After depositting ammount: " << balance << endl;
        }
        else
        {
            cout << "Invalid ammount..." << endl;
        }
    }
    void withdraw(double ammount)
    {
        if (ammount>0&&ammount<=balance)
        {
            balance -= ammount;
            cout << "Ammount withdarawal successfully." << balance << endl;
        }
        else
        {
            cout << "Insufficient amount..." << endl;
        }
    }
    void display()
    {
        cout << "Account number is: " << accountNumber << endl;
        cout << "Balance in the account is: " << balance<< endl;
    }
};

int main()
{
    BankAccount a1(1234, 10000);
    a1.display();
    a1.deposit(500);
    a1.withdraw(300);
}