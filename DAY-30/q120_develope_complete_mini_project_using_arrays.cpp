#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int roll[MAX];
string name[MAX];
float marks[MAX];
int totalStudents = 0;

// Function Declarations
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main()
{
    int choice;

    do
    {
        cout << "\n=====================================\n";
        cout << "     STUDENT MANAGEMENT SYSTEM\n";
        cout << "=====================================\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
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

    } while(choice != 6);

    return 0;
}

// Function to Add Student
void addStudent()
{
    if(totalStudents >= MAX)
    {
        cout << "\nRecord Full!\n";
        return;
    }

    cout << "\nEnter Roll Number: ";
    cin >> roll[totalStudents];

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[totalStudents]);

    cout << "Enter Marks: ";
    cin >> marks[totalStudents];

    totalStudents++;

    cout << "\nStudent Added Successfully!\n";
}

// Function to Display Students
void displayStudents()
{
    if(totalStudents == 0)
    {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\n------ STUDENT RECORDS ------\n";

    for(int i = 0; i < totalStudents; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No : " << roll[i] << endl;
        cout << "Name    : " << name[i] << endl;
        cout << "Marks   : " << marks[i] << endl;
    }
}

// Function to Search Student
void searchStudent()
{
    int r;
    bool found = false;

    cout << "\nEnter Roll Number: ";
    cin >> r;

    for(int i = 0; i < totalStudents; i++)
    {
        if(roll[i] == r)
        {
            cout << "\nStudent Found\n";
            cout << "Roll No : " << roll[i] << endl;
            cout << "Name    : " << name[i] << endl;
            cout << "Marks   : " << marks[i] << endl;

            found = true;
            break;
        }
    }

    if(!found)
        cout << "\nStudent Not Found!\n";
}

// Function to Update Student
void updateStudent()
{
    int r;
    bool found = false;

    cout << "\nEnter Roll Number to Update: ";
    cin >> r;

    for(int i = 0; i < totalStudents; i++)
    {
        if(roll[i] == r)
        {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, name[i]);

            cout << "Enter New Marks: ";
            cin >> marks[i];

            cout << "\nRecord Updated Successfully!\n";
            found = true;
            break;
        }
    }

    if(!found)
        cout << "\nStudent Not Found!\n";
}

// Function to Delete Student
void deleteStudent()
{
    int r;
    bool found = false;

    cout << "\nEnter Roll Number to Delete: ";
    cin >> r;

    for(int i = 0; i < totalStudents; i++)
    {
        if(roll[i] == r)
        {
            for(int j = i; j < totalStudents - 1; j++)
            {
                roll[j] = roll[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
            }

            totalStudents--;

            cout << "\nRecord Deleted Successfully!\n";
            found = true;
            break;
        }
    }

    if(!found)
        cout << "\nStudent Not Found!\n";
}