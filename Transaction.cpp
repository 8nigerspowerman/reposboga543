#include "Transaction.h"
#include "Wallet.h"
#include <iostream>
#include <string>

using namespace std;

void Transaction::dfoodtransaction(double sum) {
	if (sum < a.debitbalance) {
		a.debitbalance -= sum;
		cout << "Теперь ваш баланс дебетовой карты составлят " << a.debitbalance << endl;
	}
	else
		cout << "Сумма больше вашего баланса, попробуйте поплнить баланс" << endl;
}
void Transaction::dentertaintmenttransaction(double sum){
	if (sum > a.debitbalance) {
		a.debitbalance -= sum;
		cout << "Теперь ваш баланс дебетовой карты составлят " << a.debitbalance << endl;
	}
	else
		cout << "Сумма больше вашего баланса, попробуйте поплнить баланс" << endl;
}
void Transaction::dtravellingtransaction(double sum) {
	if (sum < a.debitbalance) {
		a.debitbalance -= sum;
		cout << "Теперь ваш баланс дебетовой карты составлят " << a.debitbalance << endl;
	}
	else
		cout << "Сумма больше вашего баланса, попробуйте поплнить баланс" << endl;
}
void Transaction::dbuyingclothestransaction(double sum) {
	if (sum < a.debitbalance) {
		a.debitbalance -= sum;
		cout << "Теперь ваш баланс дебетовой карты составлят " << a.debitbalance << endl;
	}
	else
		cout << "Сумма больше вашего баланса, попробуйте поплнить баланс" << endl;
}



void Transaction::cfoodtransaction(double sum) {
	if (sum < a.creditbalance) {
		a.creditbalance -= sum;
		cout << "Теперь ваш баланс кредитной карты составлят " << a.creditbalance << endl;
	}
	else if (a.creditbalance == 0 or sum > a.creditbalance) {
		a.creditbalance -= sum;
		cout << "Кредит у банка взят, не забудьте пополнить задолжность до XX.XX.XXXX. Ваш баланс составляет " << a.creditbalance << endl;
	}
	else if (a.limit < a.creditbalance + sum);
	cout << "Вы привысили баланс, списание невозможно";
}
void Transaction::centertaintmenttransaction(double sum) {
	if (sum < a.creditbalance) {
		a.creditbalance -= sum;
		cout << "Теперь ваш баланс кредитной карты составлят " << a.creditbalance << endl;
	}
	else if (a.creditbalance == 0 or sum > a.creditbalance) {
		a.creditbalance -= sum;
		cout << "Кредит у банка взят, не забудьте пополнить задолжность до XX.XX.XXXX. Ваш баланс составляет " << a.creditbalance << endl;
	}
	else if (a.limit < a.creditbalance + sum);
	cout << "Вы привысили баланс, списание невозможно";
}
void Transaction::ctravellingtransaction(double sum) {
	if (sum < a.creditbalance) {
		a.creditbalance -= sum;
		cout << "Теперь ваш баланс кредитной карты составлят " << a.creditbalance << endl;
	}
	else if (a.creditbalance == 0 or sum > a.creditbalance) {
		a.creditbalance -= sum;
		cout << "Кредит у банка взят, не забудьте пополнить задолжность до XX.XX.XXXX. Ваш баланс составляет " << a.creditbalance << endl;
	}
	else if (a.limit < a.creditbalance + sum);
	cout << "Вы привысили баланс, списание невозможно";
}
void Transaction::cbuyingclothestransaction(double sum) {
	if (sum < a.creditbalance) {
		a.creditbalance -= sum;
		cout << "Теперь ваш баланс кредитной карты составлят " << a.creditbalance << endl;
	}
	else if (a.creditbalance == 0 or sum > a.creditbalance) {
		a.creditbalance -= sum;
		cout << "Кредит у банка взят, не забудьте пополнить задолжность до XX.XX.XXXX. Ваш баланс составляет " << a.creditbalance << endl;
	}
	else if (a.limit < a.creditbalance + sum);
	cout << "Вы привысили баланс, списание невозможно";
}