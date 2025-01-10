#include <iostream>
using namespace std;

class ATM {
private:
    double balance;
public:
    ATM() : balance(1000.0) {}

    void checkBalance() {
        cout << "Your balance is: $" << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
        }
    }
};

int main() {
    ATM myATM;
    int choice;
    double amount;

    do {
        cout << "ATM Menu: \n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                myATM.checkBalance();
                break;
            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;
                myATM.deposit(amount);
                break;
            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                myATM.withdraw(amount);
                break;
            case 4:
                cout << "Exiting... Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
