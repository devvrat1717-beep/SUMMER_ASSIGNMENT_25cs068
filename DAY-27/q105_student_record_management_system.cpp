#include <iostream>
#include <string>
using namespace std;

struct Student {
    int roll;
    string name;
    int age;
    float marks;
};

Student s[100];
int total = 0;

// Add Student
void addStudent() {
    cout << "\nEnter Roll Number: ";
    cin >> s[total].roll;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s[total].name);

    cout << "Enter Age: ";
    cin >> s[total].age;

    cout << "Enter Marks: ";
    cin >> s[total].marks;

    total++;
    cout << "\nStudent Record Added Successfully!\n";
}

// Display Students
void displayStudents() {
    if (total == 0) {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\n----- Student Records -----\n";
    for (int i = 0; i < total; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number : " << s[i].roll << endl;
        cout << "Name        : " << s[i].name << endl;
        cout << "Age         : " << s[i].age << endl;
        cout << "Marks       : " << s[i].marks << endl;
    }
}

// Search Student
void searchStudent() {
    int roll;
    cout << "\nEnter Roll Number to Search: ";
    cin >> roll;

    for (int i = 0; i < total; i++) {
        if (s[i].roll == roll) {
            cout << "\nStudent Found!\n";
            cout << "Roll Number : " << s[i].roll << endl;
            cout << "Name        : " << s[i].name << endl;
            cout << "Age         : " << s[i].age << endl;
            cout << "Marks       : " << s[i].marks << endl;
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

// Update Student
void updateStudent() {
    int roll;
    cout << "\nEnter Roll Number to Update: ";
    cin >> roll;
    cin.ignore();

    for (int i = 0; i < total; i++) {
        if (s[i].roll == roll) {
            cout << "Enter New Name: ";
            getline(cin, s[i].name);

            cout << "Enter New Age: ";
            cin >> s[i].age;

            cout << "Enter New Marks: ";
            cin >> s[i].marks;

            cout << "\nRecord Updated Successfully!\n";
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

// Delete Student
void deleteStudent() {
    int roll;
    cout << "\nEnter Roll Number to Delete: ";
    cin >> roll;

    for (int i = 0; i < total; i++) {
        if (s[i].roll == roll) {
            for (int j = i; j < total - 1; j++) {
                s[j] = s[j + 1];
            }
            total--;
            cout << "\nRecord Deleted Successfully!\n";
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n========== Student Record Management System ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
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