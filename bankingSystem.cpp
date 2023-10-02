#include <iostream>
#include <fstream>
#include <map>
using namespace std;

class Account {
private:
    // Variables
    long accountNum;
    string firstName;
    string lastName;
    float balance;

    static long nextAccountNum;

public: 
    // Constructors
    Account(){};
    Account(string f, string l, int bal) {
        firstName = f;
        lastName = l;
        balance = bal;
        accountNum;
    }

    // Getters
    long getAccNum() {return accountNum;}
    string getFirstName() {return firstName;}
    string getLastName() {return lastName;}
    float getBalance() {return balance;}

    // Friend Operator Overloads
    friend ofstream &operator << (ofstream &fos, Account &a);
    friend ifstream &operator >> (ifstream &fis, Account &a);
    friend ostream &operator << (ostream &os, Account &a);
};

class Bank {
private:
    map<long, Account> accounts;
public:
    void openAcc();
    void deposit();
    void withdraw();
    void closeAcc();
    void showAccounts();
};

long Account::nextAccountNum = 0; // Initialize nextAccountNum to 0

int main() {
    Bank b;
    Account acc;

    int choice;
    string fname, lname;
    long accountNumber;
    float balance;
    float amount;

    cout << "***Banking System***" << endl;
    cout << "\n";

    // Ask till quit
    do {
        cout << "\tSelect one option below:" << endl;
        cout << "\t1 Open an Account" << endl;
        cout << "\t2 Balance Enquiry" << endl;
        cout << "\t3 Deposit" << endl;
        cout << "\t4 Withdrawal" << endl;
        cout << "\t5 Close an Account" << endl;
        cout << "\t6 Show All Accounts" << endl;
        cout << "\t7 Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter First name: ";
            cin >> fname;
            cout << "Enter Last name: ";
            cin >> lname;
            cout << "Enter initial Balance: ";
            cin >> balance;
            break;
        
        case 2:
            break;
        
        case 3:
            break;
        
        case 4:
            break;
        
        case 5:
            break;
        
        case 6:
            break;
        
        case 7:
            break;
        
        default:
            cout << "Invalid Input. Choose a valid option.";
            break;
        }
    } while (choice != 7)
}

// Get Account Details
void Bank::openAcc() {

    // Open the file for writing
    ofstream fos("Details.txt", ios::app);

    // Check if file opened successfully
    if (!fos) {
        cerr << "Error opening the file 'Details.txt'" << endl;
        return; 
    }

    // Write the account details to the file
    // fos << ;

    // Print the account details & close file
    cout << "Congratulations, Account is Created!" << endl << a << endl;
    fos.close();
}




// Operator Overloads (of & if & os)
ofstream &operator << (ofstream &fos, Account &a) {
    fos << a.firstName << endl << a.lastName << endl << a.accountNum << endl << a.balance << endl;
    return fos;
}

ifstream &operator >> (ifstream &fis, Account &a) {
    fis >> a.firstName >> a.lastName >> a.accountNum >> a.balance;
    return fis;
}

ostream &operator << (ostream &os, Account &a) {
    os << "First name: " << a.firstName << endl << "Last Name: " << a.lastName << endl 
    << "Account Number: " << a.accountNum << endl << "Balance: " << a.balance << endl;
}