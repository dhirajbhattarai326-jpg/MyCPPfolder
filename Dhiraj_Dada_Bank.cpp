//simple banking system with basic functionalities like depositing money, withdrawing money, and checking balance using functions.
#include <iostream>
    double checkBalance(double balance);
    double deposit(double balance);
    double withdraw(double balance, double amount);
        int main() {
            double balance = 0.0;
            int choice;
            do {
                std::cout<<"********************************"<<std::endl;
                std::cout<<"*****DHIRAJ_DADA_BANK_LIMITED*****"<<std::endl;
                std::cout<<"********************************"<<std::endl;
                std::cout << "Welcome to Dhiraj Dada Bank!" << std::endl;
                std::cout << "1. Check Balance" << std::endl;
                std::cout << "2. Deposit Money" << std::endl;
                std::cout << "3. Withdraw Money" << std::endl;
                std::cout << "4. Exit" << std::endl;
                std::cout << "Please enter your choice: ";
                std::cin >> choice;
                std::cin.clear();
                fflush(stdin);

                switch (choice) {
                    case 1:
                        balance = checkBalance(balance);
                        std::cout << "Your balance is: NPR " << balance << std::endl;
                        break;
                    case 2:
                        balance = deposit(balance);
                        std::cout << "Your balance is: NPR " << balance << std::endl;
                        break;
                    case 3:
                        double amount;
                        std::cout << "Enter amount to withdraw: ";
                        std::cin >> amount;
                        balance = withdraw(balance,amount);
                        std::cout << "Your balance is: NPR " << balance << std::endl;
                        break;
                    case 4:
                        std::cout << "Thank you for banking with us!" << std::endl;
                        break;
                    default:
                        std::cout << "Invalid choice, please try again." << std::endl;
                }
            } while (choice != 4);

            return 0;
        }
    double checkBalance(double balance) {
        std::cout << "Your current balance is: NPR " << balance << std::endl;
        return balance;
    }
    double deposit(double balance) {
        double amount;
        std::cout << "Enter amount to deposit: ";
        std::cin >> amount;
        if (amount > 0) {
            balance += amount;
            std::cout << "Amount deposited successfully!" << std::endl;
        } else {
            std::cout << "Invalid amount, please try again." << std::endl;
        }
        return balance;
    }
    double withdraw(double balance, double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Amount withdrawn successfully!" << std::endl;
        } else {
            std::cout << "Invalid amount or insufficient balance." << std::endl;
        }
        return balance;
    }

