#include "ATM.h"

int main() {

	Account Jim(100, "jim", "123456");
	/*
	Jim.ShowBalance();
	Jim.deposit(20);
	Jim.ShowBalance();
	Jim.withdraw(200);
	Jim.ShowBalance();
	Jim.withdraw(50);
	Jim.ShowBalance();*/
	ATM atm;
	atm.run(Jim);

	
	return 0;
}