#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    float basicSalary;
    float hra;
    float da;
    float pf;
    float netSalary;
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

    cout << "Enter Basic Salary: ";
    cin >> emp[total].basicSalary;

    // Salary Calculation
    emp[total].hra = 0.20 * emp[total].basicSalary; // 20%
    emp[total].da  = 0.10 * emp[total].basicSalary; // 10%
    emp[total].pf  = 0.08 * emp[total].basicSalary; // 8%

    emp[total].netSalary = emp[total].basicSalary +
                           emp[total].hra +
                           emp[total].da -
                           emp[total].pf;

    total++;

    cout << "\nEmployee Salary Added Successfully!\n";
}

// Display All Employees
void displayEmployees() {
    if (total == 0) {
        cout << "\nNo Employee Records Found!\n";
        return;
    }

    cout << "\n========== Salary Records ==========\n";

    for (int i = 0; i < total; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID : " << emp[i].id << endl;
        cout << "Name        : " << emp[i].name << endl;
        cout << "Basic Salary: " << emp[i].basicSalary << endl;
        cout << "HRA (20%)   : " << emp[i].hra << endl;
        cout << "DA (10%)    : " << emp[i].da << endl;
        cout << "PF (8%)     : " << emp[i].pf << endl;
        cout << "Net Salary  : " << emp[i].netSalary << endl;
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
            cout << "Name        : " << emp[i].name << endl;
            cout << "Basic Salary: " << emp[i].basicSalary << endl;
            cout << "HRA         : " << emp[i].hra << endl;
            cout << "DA          : " << emp[i].da << endl;
            cout << "PF          : " << emp[i].pf << endl;
            cout << "Net Salary  : " << emp[i].netSalary << endl;
            return;
        }
    }

    cout << "\nEmployee Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n====== Salary Management System ======\n";
        cout << "1. Add Employee Salary\n";
        cout << "2. Display All Salaries\n";
        cout << "3. Search Employee Salary\n";
        cout << "4. Exit\n";
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
                cout << "\nThank You!\n";
                break;
            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}