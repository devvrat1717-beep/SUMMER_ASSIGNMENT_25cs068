#include <iostream>
using namespace std;

int main()
{
    int choice;
    float num1, num2, result;

    do
    {
        cout << "\n===== MENU DRIVEN CALCULATOR =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5)
        {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice)
        {
            case 1:
                result = num1 + num2;
                cout << "Result = " << result << endl;
                break;

            case 2:
                result = num1 - num2;
                cout << "Result = " << result << endl;
                break;

            case 3:
                result = num1 * num2;
                cout << "Result = " << result << endl;
                break;

            case 4:
                if (num2 != 0)
                {
                    result = num1 / num2;
                    cout << "Result = " << result << endl;
                }
                else
                {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;

            case 5:
                if ((int)num2 != 0)
                {
                    cout << "Result = " << (int)num1 % (int)num2 << endl;
                }
                else
                {
                    cout << "Error! Modulus by zero is not allowed." << endl;
                }
                break;

            case 6:
                cout << "Exiting Calculator..." << endl;
                break;

            default:
                cout << "Invalid Choice! Please try again." << endl;
        }

    } while (choice != 6);

    return 0;
}