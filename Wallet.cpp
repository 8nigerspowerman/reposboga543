#include "Wallet.h"
#include "Transaction.h"
#include <iostream>

using namespace std;

void Wallet::creditcardreplenishment(double sum) {
	creditbalance += sum;
	if (sum > 0)
		cout << "������ ��� ������ ��������� ����� ��������� " << creditbalance << endl;
	else
		cout << "�� ������ �� ���������" << endl;
}
void Wallet::debitcardreplenishment(double sum) {
	debitbalance += sum;
	if (sum > 0)
		cout << "������ ��� ������ ��������� ����� ��������� " << debitbalance << endl;
	else
		cout << "�� ������ �� ���������" << endl;
}

void Wallet::creditcarddebiting(double sum) {
	if (sum < creditbalance) {
		creditbalance -= sum;
		cout << "������ ��� ������ ��������� ����� ��������� " << creditbalance << endl;
	}
	else if (creditbalance == 0 or sum > creditbalance) {
		creditbalance -= sum;
		cout << "������ � ����� ����, �� �������� ��������� ����������� �� XX.XX.XXXX. ��� ������ ���������� " << creditbalance << endl;
	}
	else if (sum > creditbalance + sum);
		cout << "�� ��������� ������, �������� ����������";
}
void Wallet::debitcarddebiting(double sum) {
	if (sum < debitbalance) {
		debitbalance -= sum;
		cout << "������ ��� ������ ��������� ����� ��������� " << debitbalance << endl;
	}
	else
		cout << "��������� ����� ������ ��������� ��� ������ �������, ���������� �������� ������" << endl;
}