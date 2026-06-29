#include <iostream>
using namespace std;

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    Item item[100];
    int n = 0, choice, i, id, found;

    do
    {
        cout << "\n====== INVENTORY MANAGEMENT SYSTEM ======\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Update Item\n";
        cout << "5. Delete Item\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Item ID: ";
                cin >> item[n].id;
                cin.ignore();

                cout << "Enter Item Name: ";
                cin.getline(item[n].name, 50);

                cout << "Enter Quantity: ";
                cin >> item[n].quantity;

                cout << "Enter Price: ";
                cin >> item[n].price;

                n++;
                cout << "Item Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "Inventory is Empty!\n";
                }
                else
                {
                    cout << "\nID\tName\t\tQuantity\tPrice\n";
                    cout << "----------------------------------------------\n";

                    for(i = 0; i < n; i++)
                    {
                        cout << item[i].id << "\t"
                             << item[i].name << "\t\t"
                             << item[i].quantity << "\t\t"
                             << item[i].price << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Item ID to Search: ";
                cin >> id;

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(item[i].id == id)
                    {
                        cout << "\nItem Found!\n";
                        cout << "ID: " << item[i].id << endl;
                        cout << "Name: " << item[i].name << endl;
                        cout << "Quantity: " << item[i].quantity << endl;
                        cout << "Price: " << item[i].price << endl;

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "Item Not Found!\n";
                break;

            case 4:
                cout << "Enter Item ID to Update: ";
                cin >> id;

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(item[i].id == id)
                    {
                        cin.ignore();

                        cout << "Enter New Name: ";
                        cin.getline(item[i].name, 50);

                        cout << "Enter New Quantity: ";
                        cin >> item[i].quantity;

                        cout << "Enter New Price: ";
                        cin >> item[i].price;

                        cout << "Item Updated Successfully!\n";
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "Item Not Found!\n";
                break;

            case 5:
                cout << "Enter Item ID to Delete: ";
                cin >> id;

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(item[i].id == id)
                    {
                        for(int j = i; j < n - 1; j++)
                        {
                            item[j] = item[j + 1];
                        }

                        n--;
                        found = 1;
                        cout << "Item Deleted Successfully!\n";
                        break;
                    }
                }

                if(found == 0)
                    cout << "Item Not Found!\n";
                break;

            case 6:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}