/*
==========================================================
                ENCAPSULATION DEMONSTRATION
==========================================================

Definition:
-----------
Encapsulation means wrapping data and functions
into a single unit (Class) and restricting direct
access to the data.

Advantages:
-----------
1. Data Hiding
2. Better Security
3. Controlled Access
4. Improved Maintainability

==========================================================
*/

#include <iostream>
using namespace std;

class BankAccount
{
private:

    // ==============================================
    // PRIVATE DATA MEMBERS
    // Cannot be accessed directly from outside
    // ==============================================

    string accountHolder;
    double balance;

public:

    // ==============================================
    // CONSTRUCTOR
    // ==============================================

    BankAccount(string name, double initialBalance)
    {
        accountHolder = name;
        balance = initialBalance;
    }

    // ==============================================
    // SETTER FUNCTIONS
    // Used to modify private data
    // ==============================================

    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;

            cout << amount
                 << " Deposited Successfully"
                 << endl;
        }
    }

    void withdraw(double amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;

            cout << amount
                 << " Withdrawn Successfully"
                 << endl;
        }
        else
        {
            cout << "Insufficient Balance"
                 << endl;
        }
    }

    // ==============================================
    // GETTER FUNCTIONS
    // Used to access private data
    // ==============================================

    string getAccountHolder()
    {
        return accountHolder;
    }

    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account(
        "Aditya",
        5000
    );

    // ==============================================
    // ACCESS THROUGH GETTERS
    // ==============================================

    cout << "Account Holder : "
         << account.getAccountHolder()
         << endl;

    cout << "Balance : "
         << account.getBalance()
         << endl;

    // ==============================================
    // MODIFY THROUGH PUBLIC FUNCTIONS
    // ==============================================

    account.deposit(2000);

    account.withdraw(1000);

    cout << "\nUpdated Balance : "
         << account.getBalance()
         << endl;

    // ==============================================
    // NOT ALLOWED
    // ==============================================

    // account.balance = 100000;
    // account.accountHolder = "Someone";

    /*
    ERROR

    Because balance and accountHolder
    are private members.
    */

    return 0;
}