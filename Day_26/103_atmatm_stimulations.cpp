#include <iostream>
using namespace std;
int main() {
    int balance = 10000;
    int pin = 1234;
    int enteredPin;
    int choice, amount;
    cout << "Enter PIN: ";
    cin >> enteredPin;
    if (enteredPin != pin) {
        cout << "Wrong PIN!";
        return 0;
    }
    do {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Balance = " << balance << endl;
            break;
        case 2:
            cout << "Enter amount: ";
            cin >> amount;
            balance += amount;
            cout << "Money Deposited Successfully!\n";
            break;
        case 3:
            cout << "Enter amount: ";
            cin >> amount;
            if (amount <= balance) {
                balance -= amount;
                cout << "Please collect your cash.\n";
            }
            else {
                cout << "Insufficient Balance!\n";
            }
            break;
        case 4:
            cout << "Thank You!\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }
    } while (choice != 4);

    return 0;
}