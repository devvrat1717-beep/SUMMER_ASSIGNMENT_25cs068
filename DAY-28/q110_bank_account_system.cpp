#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string name;
    float balance;

public:
    void createAccount() {
        cout << "\nEnter Account Number: ";
        cin >> accountNumber;
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    void displayAccount() {
        cout << "\n----- Account Details -----";
        cout << "\nAccount Number : " << accountNumber;
        cout << "\nAccount Holder : " << name;
        cout << "\nBalance         : Rs. " << balance << endl;
    }

    void deposit() {
        float amount;
        cout << "\nEnter Amount to Deposit: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "Deposit Successful!\n";
            cout << "Updated Balance: Rs. " << balance << endl;
        } else {
            cout << "Invalid Amount!\n";
        }
    }

    void withdraw() {
        float amount;
        cout << "\nEnter Amount to Withdraw: ";
        cin >> amount;

        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
            cout << "Remaining Balance: Rs. " << balance << endl;
        } else {
            cout << "Insufficient Balance or Invalid Amount!\n";
        }
    }

    void checkBalance() {
        cout << "\nCurrent Balance: Rs. " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    do {
        cout << "\n========== BANK ACCOUNT MANAGEMENT SYSTEM ==========";
        cout << "\n1. Create Account";
        cout << "\n2. Display Account Details";
        cout << "\n3. Deposit Money";
        cout << "\n4. Withdraw Money";
        cout << "\n5. Check Balance";
        cout << "\n6. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            account.createAccount();
            break;

        case 2:
            account.displayAccount();
            break;

        case 3:
            account.deposit();
            break;

        case 4:
            account.withdraw();
            break;

        case 5:
            account.checkBalance();
            break;

        case 6:
            cout << "\nThank You for Using the Bank Account Management System!\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}