#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string name;
    string phone;
    string email;
    bool exists;

public:
    Contact() {
        exists = false;
    }

    void addContact() {
        cin.ignore();

        cout << "\nEnter Name: ";
        getline(cin, name);

        cout << "Enter Phone Number: ";
        getline(cin, phone);

        cout << "Enter Email ID: ";
        getline(cin, email);

        exists = true;

        cout << "\nContact Added Successfully!\n";
    }

    void displayContact() {
        if (!exists) {
            cout << "\nNo Contact Available!\n";
            return;
        }

        cout << "\n========== CONTACT DETAILS ==========";
        cout << "\nName         : " << name;
        cout << "\nPhone Number : " << phone;
        cout << "\nEmail ID     : " << email;
        cout << "\n=====================================\n";
    }

    void searchContact() {
        if (!exists) {
            cout << "\nNo Contact Found!\n";
            return;
        }

        string searchName;
        cin.ignore();

        cout << "\nEnter Name to Search: ";
        getline(cin, searchName);

        if (searchName == name) {
            displayContact();
        } else {
            cout << "\nContact Not Found!\n";
        }
    }

    void updateContact() {
        if (!exists) {
            cout << "\nNo Contact Found!\n";
            return;
        }

        cin.ignore();

        cout << "\nEnter New Phone Number: ";
        getline(cin, phone);

        cout << "Enter New Email ID: ";
        getline(cin, email);

        cout << "\nContact Updated Successfully!\n";
    }

    void deleteContact() {
        if (!exists) {
            cout << "\nNo Contact Found!\n";
        } else {
            exists = false;
            cout << "\nContact Deleted Successfully!\n";
        }
    }
};

int main() {
    Contact c;
    int choice;

    do {
        cout << "\n========== CONTACT MANAGEMENT SYSTEM ==========";
        cout << "\n1. Add Contact";
        cout << "\n2. Display Contact";
        cout << "\n3. Search Contact";
        cout << "\n4. Update Contact";
        cout << "\n5. Delete Contact";
        cout << "\n6. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                c.addContact();
                break;

            case 2:
                c.displayContact();
                break;

            case 3:
                c.searchContact();
                break;

            case 4:
                c.updateContact();
                break;

            case 5:
                c.deleteContact();
                break;

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}