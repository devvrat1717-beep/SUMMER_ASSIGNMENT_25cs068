#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MAX = 100;

    int bookID[MAX];
    string title[MAX];
    string author[MAX];
    bool issued[MAX];

    int n = 0;
    int choice;

    do
    {
        cout << "\n========== MINI LIBRARY MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                if(n >= MAX)
                {
                    cout << "Library is Full!\n";
                    break;
                }

                cout << "\nEnter Book ID: ";
                cin >> bookID[n];

                cin.ignore();

                cout << "Enter Book Title: ";
                getline(cin, title[n]);

                cout << "Enter Author Name: ";
                getline(cin, author[n]);

                issued[n] = false;
                n++;

                cout << "\nBook Added Successfully!\n";
                break;
            }

            case 2:
            {
                if(n == 0)
                {
                    cout << "\nNo Books Available!\n";
                    break;
                }

                cout << "\n----------- BOOK LIST -----------\n";

                for(int i = 0; i < n; i++)
                {
                    cout << "\nBook " << i + 1 << endl;
                    cout << "Book ID : " << bookID[i] << endl;
                    cout << "Title   : " << title[i] << endl;
                    cout << "Author  : " << author[i] << endl;
                    cout << "Status  : ";

                    if(issued[i])
                        cout << "Issued";
                    else
                        cout << "Available";

                    cout << endl;
                }
                break;
            }

            case 3:
            {
                int id;
                bool found = false;

                cout << "\nEnter Book ID to Search: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(bookID[i] == id)
                    {
                        cout << "\nBook Found\n";
                        cout << "Book ID : " << bookID[i] << endl;
                        cout << "Title   : " << title[i] << endl;
                        cout << "Author  : " << author[i] << endl;

                        if(issued[i])
                            cout << "Status  : Issued\n";
                        else
                            cout << "Status  : Available\n";

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Found!\n";

                break;
            }

            case 4:
            {
                int id;
                bool found = false;

                cout << "\nEnter Book ID to Issue: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(bookID[i] == id)
                    {
                        found = true;

                        if(!issued[i])
                        {
                            issued[i] = true;
                            cout << "Book Issued Successfully!\n";
                        }
                        else
                        {
                            cout << "Book is Already Issued!\n";
                        }

                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Found!\n";

                break;
            }

            case 5:
            {
                int id;
                bool found = false;

                cout << "\nEnter Book ID to Return: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(bookID[i] == id)
                    {
                        found = true;

                        if(issued[i])
                        {
                            issued[i] = false;
                            cout << "Book Returned Successfully!\n";
                        }
                        else
                        {
                            cout << "Book was Not Issued!\n";
                        }

                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Found!\n";

                break;
            }

            case 6:
                cout << "\nThank You for Using the Library Management System!\n";
                break;

            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while(choice != 6);

    return 0;
}