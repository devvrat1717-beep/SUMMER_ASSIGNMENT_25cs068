#include<iostream>
#include<string>
using namespace std;

int main()
{
    const int MAX = 100;

    string name[MAX];
    int roll[MAX];
    float marks[MAX];

    int n = 0, choice;

    do
    {
        cout << "\n========== STUDENT RECORD MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                if(n < MAX)
                {
                    cout << "\nEnter Roll Number: ";
                    cin >> roll[n];

                    cin.ignore();

                    cout << "Enter Student Name: ";
                    getline(cin, name[n]);

                    cout << "Enter Marks: ";
                    cin >> marks[n];

                    n++;

                    cout << "\nStudent Record Added Successfully!\n";
                }
                else
                {
                    cout << "\nRecord is Full!\n";
                }
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Records Found!\n";
                }
                else
                {
                    cout << "\n------ Student Records ------\n";
                    for(int i=0; i<n; i++)
                    {
                        cout << "\nStudent " << i+1 << endl;
                        cout << "Roll No : " << roll[i] << endl;
                        cout << "Name    : " << name[i] << endl;
                        cout << "Marks   : " << marks[i] << endl;
                    }
                }
                break;

            case 3:
            {
                int r, found = 0;
                cout << "\nEnter Roll Number to Search: ";
                cin >> r;

                for(int i=0; i<n; i++)
                {
                    if(roll[i] == r)
                    {
                        cout << "\nRecord Found\n";
                        cout << "Roll No : " << roll[i] << endl;
                        cout << "Name    : " << name[i] << endl;
                        cout << "Marks   : " << marks[i] << endl;
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "\nStudent Not Found!\n";

                break;
            }

            case 4:
            {
                int r, found = 0;
                cout << "\nEnter Roll Number to Update: ";
                cin >> r;

                for(int i=0; i<n; i++)
                {
                    if(roll[i] == r)
                    {
                        cin.ignore();

                        cout << "Enter New Name: ";
                        getline(cin, name[i]);

                        cout << "Enter New Marks: ";
                        cin >> marks[i];

                        cout << "\nRecord Updated Successfully!\n";
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "\nStudent Not Found!\n";

                break;
            }

            case 5:
            {
                int r, found = 0;
                cout << "\nEnter Roll Number to Delete: ";
                cin >> r;

                for(int i=0; i<n; i++)
                {
                    if(roll[i] == r)
                    {
                        for(int j=i; j<n-1; j++)
                        {
                            roll[j] = roll[j+1];
                            name[j] = name[j+1];
                            marks[j] = marks[j+1];
                        }

                        n--;

                        cout << "\nRecord Deleted Successfully!\n";
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "\nStudent Not Found!\n";

                break;
            }

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}