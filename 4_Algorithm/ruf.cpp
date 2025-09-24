#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;

// ================= Transaction Class =================
class Transaction {
public:
    string type;   
    double amount;
    string dateTime;

    Transaction(string t = "Unknown", double a = 0.0) : type(t), amount(a) {
        time_t now = time(0);
        dateTime = ctime(&now);
        dateTime.pop_back();
    }
};

// Forward declaration for friend function
class BankAccount;
void displaySystemInfo(BankAccount& account);

// ================= Base Class =================
class BankAccount {
private:
    string accNumber;
    string name;
    string password;
    double balance;
    vector<Transaction> history;  

    // Friend function declaration
    friend void displaySystemInfo(BankAccount& account);

protected:
    // Account info save (inline function)
    inline void saveAccountToFile() {
        ofstream file("accounts.txt", ios::app);
        if (file.is_open()) {
            file << accNumber << "," << name << "," << password << "," << balance << "\n";
            file.close();
        }
    }

    // Transaction info save (inline function)
    inline void saveTransactionToFile(string type, double amount) {
        ofstream file("transactions.txt", ios::app);
        if (file.is_open()) {
            file << accNumber << "," << name << "," << type << "," << amount << "\n";
            file.close();
        }
    }
    
    void updatePasswordInFile() {
        // Read all accounts from file
        vector<string> lines;
        string line;
        ifstream inFile("accounts.txt");
        
        while (getline(inFile, line)) {
            lines.push_back(line);
        }
        inFile.close();
        
        // Find and update the specific account
        ofstream outFile("accounts.txt");
        for (const string &accLine : lines) {
            size_t pos = accLine.find(',');
            string accNo = accLine.substr(0, pos);
            
            if (accNo == accNumber) {
                // Update the password in this line
                size_t firstComma = accLine.find(',');
                size_t secondComma = accLine.find(',', firstComma + 1);
                size_t thirdComma = accLine.find(',', secondComma + 1);
                
                string beforePass = accLine.substr(0, secondComma + 1);
                string afterPass = accLine.substr(thirdComma);
                
                outFile << beforePass << password << afterPass << "\n";
            } else {
                outFile << accLine << "\n";
            }
        }
        outFile.close();
    }

public:
    // Constructor overloading
    BankAccount(string accNo, string accName, string pass, int initialBalance = 0) {
        accNumber = accNo;
        name = accName;
        password = pass;
        balance = static_cast<double>(initialBalance);
        saveAccountToFile();
    }
    
    BankAccount(string accNo, string accName, string pass, double initialBalance) {
        accNumber = accNo;
        name = accName;
        password = pass;
        balance = initialBalance;
        saveAccountToFile();
    }

    // Encapsulation - getters
    string getAccNumber() { return accNumber; }
    string getName() { return name; }
    string getPassword() { return password; }
    double getBalance() { return balance; }
    
    // Encapsulation - setters
    void setPassword(string newPass) { password = newPass; }

    bool login(string accNo, string pass) {
        return (accNumber == accNo && password == pass);
    }

    virtual void showAccountType() {
        cout << "Generic Bank Account" << endl;
    }
    
    virtual void applyInterest() {
        cout << "Interest application not available for this account type." << endl;
    }

    virtual void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            history.push_back(Transaction("Deposit", amount));
            saveTransactionToFile("Deposit", amount);
            cout << "Deposit successful. Current Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }
    
    // Function with default parameter
    void deposit(int amount = 100) {
        deposit(static_cast<double>(amount));
    }

    virtual void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
        } else if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
            history.push_back(Transaction("Withdraw", amount));
            saveTransactionToFile("Withdraw", amount);
            cout << "Withdrawal successful. Current Balance: " << balance << endl;
        }
    }
    
    // Function with default parameter
    void withdraw(int amount = 100) {
        withdraw(static_cast<double>(amount));
    }

    void checkBalance() {
        cout << "Current Balance: " << balance << endl;
    }

    void showHistory() {
        cout << "\nTransaction History for " << name << ":\n";
        if (history.empty()) {
            cout << "No transactions yet.\n";
        } else {
            cout << left << setw(12) << "Type" << setw(10) << "Amount" << "Date & Time" << endl;
            cout << "--------------------------------------------\n";
            for (auto &t : history) {
                cout << left << setw(12) << t.type << setw(10) << t.amount << t.dateTime << endl;
            }
        }
    }
    
    void displayAccountInfo() {
        cout << "\n=== Account Information ===" << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Account Type: ";
        showAccountType();
        cout << "Current Balance: " << balance << endl;
    }
    
    void changePassword() {
        string currentPass, newPass, confirmPass;
        cout << "Enter current password: ";
        cin >> currentPass;
        
        if (currentPass != password) {
            cout << "Incorrect current password!" << endl;
            return;
        }
        
        cout << "Enter new password: ";
        cin >> newPass;
        cout << "Confirm new password: ";
        cin >> confirmPass;
        
        if (newPass == confirmPass) {
            password = newPass;
            cout << "Password changed successfully!" << endl;
            updatePasswordInFile();
        } else {
            cout << "New passwords do not match!" << endl;
        }
    }
    
    void setPin() {
        string newPin, confirmPin;
        cout << "Set a new PIN (4 digits): ";
        cin >> newPin;
        
        if (newPin.length() != 4) {
            cout << "PIN must be 4 digits!" << endl;
            return;
        }
        
        // Check if all characters are digits
        for (char c : newPin) {
            if (!isdigit(c)) {
                cout << "PIN must contain only digits!" << endl;
                return;
            }
        }
        
        cout << "Confirm PIN: ";
        cin >> confirmPin;
        
        if (newPin == confirmPin) {
            password = newPin;
            cout << "PIN set successfully!" << endl;
            updatePasswordInFile();
        } else {
            cout << "PINs do not match!" << endl;
        }
    }
    
    void changePin() {
        string currentPin, newPin, confirmPin;
        cout << "Enter current PIN: ";
        cin >> currentPin;
        
        if (currentPin != password) {
            cout << "Incorrect current PIN!" << endl;
            return;
        }
        
        cout << "Enter new PIN (4 digits): ";
        cin >> newPin;
        
        if (newPin.length() != 4) {
            cout << "PIN must be 4 digits!" << endl;
            return;
        }
        
        // Check if all characters are digits
        for (char c : newPin) {
            if (!isdigit(c)) {
                cout << "PIN must contain only digits!" << endl;
                return;
            }
        }
        
        cout << "Confirm new PIN: ";
        cin >> confirmPin;
        
        if (newPin == confirmPin) {
            password = newPin;
            cout << "PIN changed successfully!" << endl;
            updatePasswordInFile();
        } else {
            cout << "New PINs do not match!" << endl;
        }
    }
};

// Friend function definition
void displaySystemInfo(BankAccount& account) {
    cout << "\n=== System Information (Friend Function) ===" << endl;
    cout << "Account Number: " << account.accNumber << endl;
    cout << "Account Holder: " << account.name << endl;
    cout << "Balance: " << account.balance << endl;
    cout << "Password: " << account.password << endl;
    cout << "Transaction History Size: " << account.history.size() << endl;
}

// ================= Derived Classes =================
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    // Constructor overloading
    SavingsAccount(string accNo, string accName, string pass, int balance = 0) 
        : BankAccount(accNo, accName, pass, balance) {
        interestRate = 3.5; // 3.5% annual interest rate
    }
    
    SavingsAccount(string accNo, string accName, string pass, double balance) 
        : BankAccount(accNo, accName, pass, balance) {
        interestRate = 3.5; // 3.5% annual interest rate
    }

    // Function overriding
    void showAccountType() override {
        cout << "Savings Account" << endl;
    }
    
    // Function overriding
    void applyInterest() override {
        double interest = getBalance() * (interestRate / 100);
        deposit(interest);
        cout << "Interest of " << interest << " applied to your account." << endl;
    }
    
    double getInterestRate() { return interestRate; }
};

class CurrentAccount : public BankAccount {
public:
    // Constructor overloading
    CurrentAccount(string accNo, string accName, string pass, int balance = 0) 
        : BankAccount(accNo, accName, pass, balance) {}
    
    CurrentAccount(string accNo, string accName, string pass, double balance) 
        : BankAccount(accNo, accName, pass, balance) {}

    // Function overriding
    void showAccountType() override {
        cout << "Current Account" << endl;
    }
};

// ================= Main Banking System =================
int main() {
    vector<BankAccount*> accounts; 
    int choice;

    do {
        cout << "\n--- Banking System Menu ---\n";
        cout << "1. Create Savings Account\n";
        cout << "2. Create Current Account\n";
        cout << "3. Login\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1 || choice == 2) {
            string accNo, name, pass;
            int initialBalance;
            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Set Password: ";
            cin >> pass;
            cout << "Enter Initial Balance: ";
            cin >> initialBalance;

            if (choice == 1)
                accounts.push_back(new SavingsAccount(accNo, name, pass, initialBalance));
            else
                accounts.push_back(new CurrentAccount(accNo, name, pass, initialBalance));

            cout << "Account created successfully! (Saved to accounts.txt)\n";
        }
        else if (choice == 3) {
            string accNo, pass;
            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Password: ";
            cin >> pass;

            bool found = false;
            for (auto &acc : accounts) {
                if (acc->login(accNo, pass)) {
                    found = true;
                    cout << "\nWelcome " << acc->getName() << "!\n";
                    acc->showAccountType();

                    int option;
                    do {
                        cout << "\n--- Account Menu ---\n";
                        cout << "1. Deposit Money\n";
                        cout << "2. Withdraw Money\n";
                        cout << "3. Check Balance\n";
                        cout << "4. Show Transaction History\n";
                        cout << "5. Display Account Information\n";
                        cout << "6. Apply Interest (Savings Only)\n";
                        cout << "7. Change Password\n";
                        cout << "8. Set PIN\n";
                        cout << "9. Change PIN\n";
                        cout << "10. Display System Info (Friend Function)\n";
                        cout << "11. Logout\n";
                        cout << "Enter your choice: ";
                        cin >> option;                               

                        if (option == 1) {
                            int amt;
                            cout << "Enter amount to deposit (default 100 if 0 entered): ";
                            cin >> amt;
                            if (amt == 0) {
                                acc->deposit(); // Use default value
                            } else {
                                acc->deposit(amt);
                            }
                        } 
                        else if (option == 2) {
                            int amt;
                            cout << "Enter amount to withdraw (default 100 if 0 entered): ";
                            cin >> amt;
                            if (amt == 0) {
                                acc->withdraw(); // Use default value
                            } else {
                                acc->withdraw(amt);
                            }
                        } 
                        else if (option == 3) {
                            acc->checkBalance();
                        } 
                        else if (option == 4) {
                            acc->showHistory();
                        } 
                        else if (option == 5) {
                            acc->displayAccountInfo();
                        }
                        else if (option == 6) {
                            acc->applyInterest();
                        }
                        else if (option == 7) {
                            acc->changePassword();
                        }
                        else if (option == 8) {
                            acc->setPin();
                        }
                        else if (option == 9) {
                            acc->changePin();
                        }
                        else if (option == 10) {
                            displaySystemInfo(*acc);
                        }
                        else if (option == 11) {
                            cout << "Logging out...\n";
                        } 
                        else {
                            cout << "Invalid choice.\n";
                        }
                    } while (option != 11);
                }
            }
            if (!found) cout << "Invalid account number or password.\n";
        }
        else if (choice == 4) {
            cout << "Exiting Banking System... Goodbye!\n";
        }
        else {
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    // Clean up memory
    for (auto acc : accounts) {
        delete acc;
    }

    return 0;
}