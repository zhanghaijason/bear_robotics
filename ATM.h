#ifndef ATM_H_
#define ATM_H_

#include"Account.h"

using namespace std;
class ATM {
private:
	int num_wrong_;
public:
	ATM() {
		num_wrong_ = 3;
	}
	~ATM() {}
	void run(Account & user) {
		cout << "Please insert your card" << endl;
		cout << "Hello " << user.getName() << endl;
		cout << "Please input your pin" << endl;
		string pin;
		cin >> pin;
		while (pin != user.getPin()) {
			num_wrong_--;
			cout << "Your pin is wrong, please retry. You have " << num_wrong_ << " times left";
			if (!num_wrong_) break;
			cout << "Please input your pin" << endl;
			cin >> pin;
		}

		cout << "Please select your account: press 1"<< endl;
		cout <<"or press q to exit" << endl;
		int selection = 0;
		cin >> selection;
		if (selection == 1)
			user.run();
		return;

	}
};

#endif

