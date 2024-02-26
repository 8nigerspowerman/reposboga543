#include "Wallet.h"
#include "Transaction.h"
#include <iostream>

using namespace std;

void Wallet::creditcardreplenishment(double sum) {
	creditbalance += sum;
	if (sum > 0)
		cout << "Теперь ваш баланс кредитной карты составлят " << creditbalance << endl;
	else
		cout << "Вы ничего не пополнили" << endl;
}
void Wallet::debitcardreplenishment(double sum) {
	debitbalance += sum;
	if (sum > 0)
		cout << "Теперь ваш баланс дебетовой карты составлят " << debitbalance << endl;
	else
		cout << "Вы ничего не пополнили" << endl;
}

void Wallet::creditcarddebiting(double sum) {
	if (sum < creditbalance) {
		creditbalance -= sum;
		cout << "Теперь ваш баланс кредитной карты составлят " << creditbalance << endl;
	}
	else if (creditbalance == 0 or sum > creditbalance) {
		creditbalance -= sum;
		cout << "Кредит у банка взят, не забудьте пополнить задолжность до XX.XX.XXXX. Ваш баланс составляет " << creditbalance << endl;
	}
	else if (sum > creditbalance + sum);
		cout << "Вы привысили баланс, списание невозможно";
}
void Wallet::debitcarddebiting(double sum) {
	if (sum < debitbalance) {
		debitbalance -= sum;
		cout << "Теперь ваш баланс дебетовой карты составлят " << debitbalance << endl;
	}
	else
		cout << "Списанная сумма больше возможной для вашего баланса, попробуйте поплнить баланс" << endl;
}