#include <iostream>
#include <string>
using namespace std;

class Ticket {
private:
    string passengerName;
    int age;
    int ticketNo;
    int seatNo;
    bool booked;

public:
    Ticket() {
        booked = false;
    }

    void bookTicket() {
        if (booked) {
            cout << "\nTicket is already booked!\n";
            return;
        }

        cout << "\nEnter Passenger Name: ";
        cin.ignore();
        getline(cin, passengerName);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Ticket Number: ";
        cin >> ticketNo;

        cout << "Enter Seat Number: ";
        cin >> seatNo;

        booked = true;

        cout << "\nTicket Booked Successfully!\n";
    }

    void cancelTicket() {
        if (!booked) {
            cout << "\nNo ticket has been booked.\n";
        } else {
            booked = false;
            cout << "\nTicket Cancelled Successfully!\n";
        }
    }

    void displayTicket() {
        if (!booked) {
            cout << "\nNo Ticket Found!\n";
            return;
        }

        cout << "\n========== Ticket Details ==========";
        cout << "\nPassenger Name : " << passengerName;
        cout << "\nAge            : " << age;
        cout << "\nTicket Number  : " << ticketNo;
        cout << "\nSeat Number    : " << seatNo;
        cout << "\nStatus         : Confirmed";
        cout << "\n====================================\n";
    }

    void availableSeats() {
        if (booked)
            cout << "\nSeat is already booked.\n";
        else
            cout << "\nSeat is available.\n";
    }
};

int main() {
    Ticket t;
    int choice;

    do {
        cout << "\n========== TICKET BOOKING SYSTEM ==========";
        cout << "\n1. Book Ticket";
        cout << "\n2. Cancel Ticket";
        cout << "\n3. Display Ticket";
        cout << "\n4. Check Seat Availability";
        cout << "\n5. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                t.bookTicket();
                break;

            case 2:
                t.cancelTicket();
                break;

            case 3:
                t.displayTicket();
                break;

            case 4:
                t.availableSeats();
                break;

            case 5:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}