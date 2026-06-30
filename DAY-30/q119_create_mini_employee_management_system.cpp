#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MAX = 100;

    int empID[MAX];
    string empName[MAX];
    string department[MAX];
    float salary[MAX];

    int n = 0, choice;

    do
    {
        cout << "\n========== EMPLOYEE MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                if(n >= MAX)
                {
                    cout << "\nEmployee Record is Full!\n";
                    break;
                }

                cout << "\nEnter Employee ID: ";
                cin >> empID[n];

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, empName[n]);

                cout << "Enter Department: ";
                getline(cin, department[n]);

                cout << "Enter Salary: ";
                cin >> salary[n];

                n++;

                cout << "\nEmployee Added Successfully!\n";
                break;
            }

            case 2:
            {
                if(n == 0)
                {
                    cout << "\nNo Employee Records Found!\n";
                    break;
                }

                cout << "\n----------- EMPLOYEE LIST -----------\n";

                for(int i = 0; i < n; i++)
                {
                    cout << "\nEmployee " << i + 1 << endl;
                    cout << "ID         : " << empID[i] << endl;
                    cout << "Name       : " << empName[i] << endl;
                    cout << "Department : " << department[i] << endl;
                    cout << "Salary     : " << salary[i] << endl;
                }
                break;
            }

            case 3:
            {
                int id;
                bool found = false;

                cout << "\nEnter Employee ID to Search: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(empID[i] == id)
                    {
                        cout << "\nEmployee Found\n";
                        cout << "ID         : " << empID[i] << endl;
                        cout << "Name       : " << empName[i] << endl;
                        cout << "Department : " << department[i] << endl;
                        cout << "Salary     : " << salary[i] << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nEmployee Not Found!\n";

                break;
            }

            case 4:
            {
                int id;
                bool found = false;

                cout << "\nEnter Employee ID to Update: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(empID[i] == id)
                    {
                        cin.ignore();

                        cout << "Enter New Name: ";
                        getline(cin, empName[i]);

                        cout << "Enter New Department: ";
                        getline(cin, department[i]);

                        cout << "Enter New Salary: ";
                        cin >> salary[i];

                        cout << "\nEmployee Record Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nEmployee Not Found!\n";

                break;
            }

            case 5:
            {
                int id;
                bool found = false;

                cout << "\nEnter Employee ID to Delete: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(empID[i] == id)
                    {
                        for(int j = i; j < n - 1; j++)
                        {
                            empID[j] = empID[j + 1];
                            empName[j] = empName[j + 1];
                            department[j] = department[j + 1];
                            salary[j] = salary[j + 1];
                        }

                        n--;

                        cout << "\nEmployee Deleted Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nEmployee Not Found!\n";

                break;
            }

            case 6:
                cout << "\nThank You for Using Employee Management System!\n";
                break;

            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while(choice != 6);

    return 0;
}