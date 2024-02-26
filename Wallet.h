#pragma once
#include <iostream>

using namespace std;

class Wallet
{
public:
	double creditbalance = 0;
	double debitbalance = 0;
	double limit = 20000;
	void creditcardreplenishment(double sum);
	void debitcardreplenishment(double sum);
	
	void creditcarddebiting(double sum);
	void debitcarddebiting(double sum);
};