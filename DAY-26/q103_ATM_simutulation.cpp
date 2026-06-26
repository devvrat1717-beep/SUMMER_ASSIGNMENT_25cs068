#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 10000.0, deposit, withdraw;

    do {
        cout << "\n===== ATM MENU =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: Rs. ";
                cin >> deposit;

                if (deposit > 0) {
                    balance += deposit;
                    cout << "Amount Deposited Successfully!" << endl;
                    cout << "Updated Balance: Rs. " << balance << endl;
                } else {
                    cout << "Invalid deposit amount!" << endl;
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: Rs. ";
                cin >> withdraw;

                if (withdraw <= balance && withdraw > 0) {
                    balance -= withdraw;
                    cout << "Please collect your cash." << endl;
                    cout << "Remaining Balance: Rs. " << balance << endl;
                } else if (withdraw > balance) {
                    cout << "Insufficient Balance!" << endl;
                } else {
                    cout << "Invalid withdrawal amount!" << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM!" << endl;
                break;

            default:
                cout << "Invalid Choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}