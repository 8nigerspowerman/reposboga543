#include "Transaction.h"
#include "Wallet.h"
#include <iostream>
#include <string>

using namespace std;

void Transaction::dfoodtransaction(double sum) {
	if (sum < a.debitbalance) {
		a.debitbalance -= sum;
		cout << "������ ��� ������ ��������� ����� ��������� " << a.debitbalance << endl;
	}
	else
		cout << "����� ������ ������ �������, ���������� �������� ������" << endl;
}
void Transaction::dentertaintmenttransaction(double sum){
	if (sum > a.debitbalance) {
		a.debitbalance -= sum;
		cout << "������ ��� ������ ��������� ����� ��������� " << a.debitbalance << endl;
	}
	else
		cout << "����� ������ ������ �������, ���������� �������� ������" << endl;
}
void Transaction::dtravellingtransaction(double sum) {
	if (sum < a.debitbalance) {
		a.debitbalance -= sum;
		cout << "������ ��� ������ ��������� ����� ��������� " << a.debitbalance << endl;
	}
	else
		cout << "����� ������ ������ �������, ���������� �������� ������" << endl;
}
void Transaction::dbuyingclothestransaction(double sum) {
	if (sum < a.debitbalance) {
		a.debitbalance -= sum;
		cout << "������ ��� ������ ��������� ����� ��������� " << a.debitbalance << endl;
	}
	else
		cout << "����� ������ ������ �������, ���������� �������� ������" << endl;
}



void Transaction::cfoodtransaction(double sum) {
	if (sum < a.creditbalance) {
		a.creditbalance -= sum;
		cout << "������ ��� ������ ��������� ����� ��������� " << a.creditbalance << endl;
	}
	else if (a.creditbalance == 0 or sum > a.creditbalance) {
		a.creditbalance -= sum;
		cout << "������ � ����� ����, �� �������� ��������� ����������� �� XX.XX.XXXX. ��� ������ ���������� " << a.creditbalance << endl;
	}
	else if (a.limit < a.creditbalance + sum);
	cout << "�� ��������� ������, �������� ����������";
}
void Transaction::centertaintmenttransaction(double sum) {
	if (sum < a.creditbalance) {
		a.creditbalance -= sum;
		cout << "������ ��� ������ ��������� ����� ��������� " << a.creditbalance << endl;
	}
	else if (a.creditbalance == 0 or sum > a.creditbalance) {
		a.creditbalance -= sum;
		cout << "������ � ����� ����, �� �������� ��������� ����������� �� XX.XX.XXXX. ��� ������ ���������� " << a.creditbalance << endl;
	}
	else if (a.limit < a.creditbalance + sum);
	cout << "�� ��������� ������, �������� ����������";
}
void Transaction::ctravellingtransaction(double sum) {
	if (sum < a.creditbalance) {
		a.creditbalance -= sum;
		cout << "������ ��� ������ ��������� ����� ��������� " << a.creditbalance << endl;
	}
	else if (a.creditbalance == 0 or sum > a.creditbalance) {
		a.creditbalance -= sum;
		cout << "������ � ����� ����, �� �������� ��������� ����������� �� XX.XX.XXXX. ��� ������ ���������� " << a.creditbalance << endl;
	}
	else if (a.limit < a.creditbalance + sum);
	cout << "�� ��������� ������, �������� ����������";
}
void Transaction::cbuyingclothestransaction(double sum) {
	if (sum < a.creditbalance) {
		a.creditbalance -= sum;
		cout << "������ ��� ������ ��������� ����� ��������� " << a.creditbalance << endl;
	}
	else if (a.creditbalance == 0 or sum > a.creditbalance) {
		a.creditbalance -= sum;
		cout << "������ � ����� ����, �� �������� ��������� ����������� �� XX.XX.XXXX. ��� ������ ���������� " << a.creditbalance << endl;
	}
	else if (a.limit < a.creditbalance + sum);
	cout << "�� ��������� ������, �������� ����������";
}