#pragma once
#include <iostream>
#include <string>
#include "Wallet.h"

using namespace std;

class Transaction
{
public:
	double amount = 0;
	string date;
	string category;
	Wallet a;
	void dfoodtransaction(double sum);
	void dentertaintmenttransaction(double sum);
	void dtravellingtransaction(double sum);
	void dbuyingclothestransaction(double sum);

	void cfoodtransaction(double sum);
	void centertaintmenttransaction(double sum);
	void ctravellingtransaction(double sum);
	void cbuyingclothestransaction(double sum);
};

