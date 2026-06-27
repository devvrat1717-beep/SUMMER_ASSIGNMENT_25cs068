#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    float salary;
};

Employee emp[100];
int total = 0;

// Add Employee
void addEmployee() {
    cout << "\nEnter Employee ID: ";
    cin >> emp[total].id;
    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, emp[total].name);

    cout << "Enter Department: ";
    getline(cin, emp[total].department);

    cout << "Enter Salary: ";
    cin >> emp[total].salary;

    total++;
    cout << "\nEmployee Added Successfully!\n";
}

// Display Employees
void displayEmployees() {
    if (total == 0) {
        cout << "\nNo Employee Records Found!\n";
        return;
    }

    cout << "\n========= Employee Records =========\n";

    for (int i = 0; i < total; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID : " << emp[i].id << endl;
        cout << "Name        : " << emp[i].name << endl;
        cout << "Department  : " << emp[i].department << endl;
        cout << "Salary      : " << emp[i].salary << endl;
    }
}

// Search Employee
void searchEmployee() {
    int id;
    cout << "\nEnter Employee ID to Search: ";
    cin >> id;

    for (int i = 0; i < total; i++) {
        if (emp[i].id == id) {
            cout << "\nEmployee Found!\n";
            cout << "Employee ID : " << emp[i].id << endl;
            cout << "Name        : " << emp[i].name << endl;
            cout << "Department  : " << emp[i].department << endl;
            cout << "Salary      : " << emp[i].salary << endl;
            return;
        }
    }

    cout << "\nEmployee Not Found!\n";
}

// Update Employee
void updateEmployee() {
    int id;
    cout << "\nEnter Employee ID to Update: ";
    cin >> id;
    cin.ignore();

    for (int i = 0; i < total; i++) {
        if (emp[i].id == id) {
            cout << "Enter New Name: ";
            getline(cin, emp[i].name);

            cout << "Enter New Department: ";
            getline(cin, emp[i].department);

            cout << "Enter New Salary: ";
            cin >> emp[i].salary;

            cout << "\nEmployee Record Updated Successfully!\n";
            return;
        }
    }

    cout << "\nEmployee Not Found!\n";
}

// Delete Employee
void deleteEmployee() {
    int id;
    cout << "\nEnter Employee ID to Delete: ";
    cin >> id;

    for (int i = 0; i < total; i++) {
        if (emp[i].id == id) {
            for (int j = i; j < total - 1; j++) {
                emp[j] = emp[j + 1];
            }

            total--;
            cout << "\nEmployee Record Deleted Successfully!\n";
            return;
        }
    }

    cout << "\nEmployee Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n========== Employee Management System ==========\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                updateEmployee();
                break;
            case 5:
                deleteEmployee();
                break;
            case 6:
                cout << "\nThank You!\n";
                break;
            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}