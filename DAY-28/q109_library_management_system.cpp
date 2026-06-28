#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool issued;

    void addBook() {
        cout << "\nEnter Book ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        issued = false;
    }

    void displayBook() {
        cout << "\nBook ID      : " << id;
        cout << "\nTitle        : " << title;
        cout << "\nAuthor       : " << author;
        cout << "\nStatus       : " << (issued ? "Issued" : "Available");
        cout << "\n----------------------------";
    }
};

int main() {
    Book books[100];
    int count = 0;
    int choice, searchId;
    bool found;

    do {
        cout << "\n\n===== LIBRARY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display All Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            books[count].addBook();
            count++;
            cout << "\nBook Added Successfully!";
            break;

        case 2:
            if(count == 0) {
                cout << "\nNo Books Available!";
            } else {
                for(int i = 0; i < count; i++) {
                    books[i].displayBook();
                }
            }
            break;

        case 3:
            cout << "\nEnter Book ID to Search: ";
            cin >> searchId;
            found = false;

            for(int i = 0; i < count; i++) {
                if(books[i].id == searchId) {
                    books[i].displayBook();
                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "\nBook Not Found!";
            break;

        case 4:
            cout << "\nEnter Book ID to Issue: ";
            cin >> searchId;
            found = false;

            for(int i = 0; i < count; i++) {
                if(books[i].id == searchId) {
                    found = true;

                    if(!books[i].issued) {
                        books[i].issued = true;
                        cout << "\nBook Issued Successfully!";
                    } else {
                        cout << "\nBook Already Issued!";
                    }
                    break;
                }
            }

            if(!found)
                cout << "\nBook Not Found!";
            break;

        case 5:
            cout << "\nEnter Book ID to Return: ";
            cin >> searchId;
            found = false;

            for(int i = 0; i < count; i++) {
                if(books[i].id == searchId) {
                    found = true;

                    if(books[i].issued) {
                        books[i].issued = false;
                        cout << "\nBook Returned Successfully!";
                    } else {
                        cout << "\nBook Was Not Issued!";
                    }
                    break;
                }
            }

            if(!found)
                cout << "\nBook Not Found!";
            break;

        case 6:
            cout << "\nThank You for Using Library Management System!";
            break;

        default:
            cout << "\nInvalid Choice!";
        }

    } while(choice != 6);

    return 0;
}