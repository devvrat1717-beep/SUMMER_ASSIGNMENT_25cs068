#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    int roll;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

    cout << "========== Marksheet Generation System ==========\n";

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "\nEnter Marks of 5 Subjects (Out of 100):\n";
    cout << "Subject 1: ";
    cin >> m1;
    cout << "Subject 2: ";
    cin >> m2;
    cout << "Subject 3: ";
    cin >> m3;
    cout << "Subject 4: ";
    cin >> m4;
    cout << "Subject 5: ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    // Grade Calculation
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 40)
        grade = 'E';
    else
        grade = 'F';

    cout << "\n\n=========================================\n";
    cout << "          STUDENT MARKSHEET\n";
    cout << "=========================================\n";
    cout << "Name        : " << name << endl;
    cout << "Roll Number : " << roll << endl;
    cout << "-----------------------------------------\n";
    cout << left << setw(15) << "Subject"
         << setw(10) << "Marks" << endl;
    cout << "-----------------------------------------\n";
    cout << setw(15) << "Subject 1" << setw(10) << m1 << endl;
    cout << setw(15) << "Subject 2" << setw(10) << m2 << endl;
    cout << setw(15) << "Subject 3" << setw(10) << m3 << endl;
    cout << setw(15) << "Subject 4" << setw(10) << m4 << endl;
    cout << setw(15) << "Subject 5" << setw(10) << m5 << endl;
    cout << "-----------------------------------------\n";
    cout << "Total Marks : " << total << " / 500" << endl;
    cout << fixed << setprecision(2);
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;

    if (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40)
        cout << "Result      : PASS" << endl;
    else
        cout << "Result      : FAIL" << endl;

    cout << "=========================================\n";

    return 0;
}