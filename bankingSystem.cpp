#include <iostream>
#include <fstream>
#include <map>
using namespace std;

#define MIN_BALANCE 500
class InsufficientFunds{};

class Account {
private:
    // Variables
    long accountNumber;
    string firstName;
    string lastName;
    float balance;
    static long NextAccountNumber;

public: 
    // Constructors
    Account(){};
    Account(string fname, string lname, float balance);
    
    // Getters
    long getAccNo() {return accountNumber;}
    string getFirstName() {return firstName;}
    string getLastName() {return lastName;}
    float getBalance() {return balance;}

    // Function declarations
    void Deposit(float amount);
    void Withdraw(float amount);
    static void setLastAccountNumber(long accountNumber);
    static long getLastAccountNumber();

    // Friend Operator Overloads
    friend ofstream &operator << (ofstream &fos, Account &a);
    friend ifstream &operator >> (ifstream &fis, Account &a);
    friend ostream &operator << (ostream &os, Account &a);
};
long Account::NextAccountNumber = 0; // Initialize nextAccountNum to 0

class Bank {
private:
    map<long, Account> accounts;
public:
    Bank();
    Account OpenAccount(string fname, string lname, float balance);
    Account BalanceEnquiry(long accountNumber);
    Account Deposit(long accountNumber, float amount);
    Account Withdraw(long accountNumber, float amount);
    void CloseAccount(long accountNumber);
    void ShowAllAccounts();
    ~Bank();
};


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
        cout << "\t7 Quit" << endl << "\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "\n"; 

        switch (choice)
        {
        case 1:
            cout << "Enter First name: ";
            cin >> fname;
            cout << "Enter Last name: ";
            cin >> lname;
            cout << "Enter initial Balance: ";
            cin >> balance;
            acc = b.OpenAccount(fname, lname, balance);
            cout << endl << "Account is created!" << endl << "\n";
            break;
        
        case 2:
            cout << "Enter Account Number: ";
            cin >> accountNumber;
            acc = b.BalanceEnquiry(accountNumber);
            cout << endl << "Your account details: " << endl;
            cout << acc;
            break;
        
        case 3:
            cout << "Enter Account Number: ";
            cin >> accountNumber;
            cout << "Enter Balance to Deposit: ";
            cin >> amount;
            acc = b.Deposit(accountNumber, amount);
            cout << endl << "Amount is deposited." << endl;
            cout << acc;
            break;
        
        case 4:
            cout << "Enter Account Number: ";
            cin >> accountNumber;
            cout << "Enter Balance to Withdraw: ";
            cin >> amount;
            acc = b.Withdraw(accountNumber, amount);
            cout << endl << "Amount Withdrawn." << endl;
            break;
        
        case 5:
            cout << "Enter Account Number: ";
            cin >> accountNumber;
            b.CloseAccount(accountNumber);
            cout << endl << "Account is Closed." << endl << "\n";
            break;
        
        case 6:
            b.ShowAllAccounts();
            break;
        
        case 7:
            break;
        
        default:
            cout << "Invalid Input. Choose a valid option.";
            exit(0);
        }
    } while (choice != 7);

    return 0;
}

// Account Constructor
Account::Account(string fname, string lname, float balance) {
    NextAccountNumber++;
    accountNumber = NextAccountNumber;
    firstName = fname;
    lastName = lname;
    this->balance = balance;
}

void Account::Deposit(float amount) {
    balance += amount;
}
void Account::Withdraw(float amount) {
    if (balance - amount < MIN_BALANCE) {
        throw InsufficientFunds();
    }
    balance -= amount;
}
void Account::setLastAccountNumber(long accountNumber) {
    NextAccountNumber = accountNumber;
}
long Account::getLastAccountNumber() {
    return NextAccountNumber;
}

// Operator Overloads (of & if & os)
ofstream &operator << (ofstream &ofs, Account &a) {
    ofs << a.accountNumber << endl << a.firstName << endl << a.lastName << endl << a.balance << endl;
    return ofs;
}

ifstream &operator >> (ifstream &ifs, Account &a) {
    ifs >> a.accountNumber >> a.firstName >> a.lastName >> a.balance;
    return ifs;
}

ostream &operator << (ostream &os, Account &a) {
    os << "First name: " << a.firstName << endl << "Last Name: " << a.lastName << endl 
    << "Account Number: " << a.accountNumber << endl << "Balance: " << a.balance << endl;
    return os;
}

Bank::Bank() {

    Account account;
    ofstream outfile("Bank.data");
    outfile.close();

    ifstream infile("Bank.data");

    // Open and insert the map into the file
    if (!infile) {
        cout << "Error in Opening! File not found." << endl;
        return;
    }

    long maxAccountNumber = 0;

    while (!infile.eof()) {
        infile >> account;
        accounts.insert(pair<long, Account>(account.getAccNo(), account));

        if (account.getAccNo() > maxAccountNumber) {
            maxAccountNumber = account.getAccNo();
        }
    }  

    // Set last account number
    Account::setLastAccountNumber(maxAccountNumber + 1);
    infile.close();
}

Account Bank::OpenAccount(string fname, string lname, float balance) {
    ofstream outfile;
    Account account(fname, lname, balance);
    accounts.insert(pair<long, Account>(account.getAccNo(), account));

    outfile.open("Bank.data", ios::trunc);

    map<long, Account>::iterator itr;
    for (itr=accounts.begin(); itr != accounts.end(); itr++) {

        outfile << itr -> second;
    }
    outfile.close();
    return account;
}

Account Bank::BalanceEnquiry(long accountNumber) {
    map<long, Account>::iterator itr = accounts.find(accountNumber);
    return itr -> second;
}
Account Bank::Deposit(long accountNumber, float amount) {
    map<long, Account>::iterator itr = accounts.find(accountNumber);
    itr -> second.Deposit(amount);
    return itr -> second;
}
Account Bank::Withdraw(long accountNumber, float amount) {
    map<long, Account>::iterator itr = accounts.find(accountNumber);
    itr -> second.Withdraw(amount);
    return itr -> second;
}

void Bank::CloseAccount(long accountNumber) {
    map<long, Account>::iterator itr = accounts.find(accountNumber);
    cout << "Account Deleted" << itr -> second;
    accounts.erase(accountNumber);
}

void Bank::ShowAllAccounts() {

    if (accounts.empty()) {
        cout << "You don't have any accounts." << endl << "\n";
        return;
    }

    map<long, Account>::iterator itr;
    for (itr=accounts.begin(); itr != accounts.end(); itr++) {
        cout << "Account " << itr -> first << endl << itr -> second << endl;
    }
}

Bank::~Bank() {
    ofstream outfile;
    outfile.open("Bank.data", ios::trunc);

    map<long, Account>::iterator itr;
    for (itr = accounts.begin(); itr != accounts.end(); itr++) {
        outfile << itr -> second;
    }

    outfile.close();
}