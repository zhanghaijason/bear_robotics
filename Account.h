#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include<iostream>
using namespace std;

class Account {
private:
	int balance_;
	string name_;
	string pin_;
public:
	void withdraw(int amount) {
		if (amount > balance_) {
			cout << "Your balance is not enough!" << endl;
			return;
		}
		balance_ -= amount;
	}

	void deposit(int amount) {
		balance_ += amount;
	}

	void ShowBalance() {
		cout <<name_ << ", your current balance: " << balance_ << endl;
	}

	string getName() {
		return name_;
	}

	string getPin() {
		return pin_;
	}

	void run() {
		cout << "Hello, what would you like to do today?" << endl;
		while (1) {
			cout << "Show balance : 1" << endl;
			cout << "Deposit : 2" << endl;
			cout << "Withdraw: 3" << endl;
			cout << "q to exit" << endl;
			int input = 0;
			cin >> input;
			if (input == 1) {
				ShowBalance();
				cout << "===========================================" << endl;
				cout << "Would like to do anything else?" << endl;
			}
			else if (input == 2) {
				cout << "Please enter your deposit amount" << endl;
				int curDeposit;
				cin >> curDeposit;
				deposit(curDeposit);
				cout << "===========================================" << endl;
				cout << "Would like to do anything else?" << endl;
			}
			else if (input == 3) {
				cout << "Please enter your withdraw amount" << endl;
				int curwithdraw;
				cin >> curwithdraw;
				withdraw(curwithdraw);
				cout << "===========================================" << endl;
				cout << "Would like to do anything else?" << endl;
			}

			else
				break;
		}
	}

	Account() {
		balance_ = 0;
		name_ = "";
		pin_ = "000000";
	}

	Account(int amount, const string & name, const string& pin) {
		balance_ = amount;
		name_ = name;
		pin_ = pin;
	}

	~Account() {}
};

#endif
