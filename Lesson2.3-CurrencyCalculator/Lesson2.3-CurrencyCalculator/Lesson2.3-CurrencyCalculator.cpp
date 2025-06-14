// Lesson2.3-CurrencyCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main() {

	double pesos, reais, soles, dollars;

	cout << "Enter number of Columbian Pesos: ";
	cin >> pesos;

	cout << "Enter number of Brazilian Reais: ";
	cin >> reais;

	cout << "Enter number of Peruvian Soles: ";
	cin >> soles;

	/*Exchange rates: 1 peso = 0.00027 USD, 1 Raeis =  0.19 USD, 1 Sol = .28 USD
		Exchange rate provided by google on 8/6/2020. */
	double pesosExchRate, raeisExchRate, solesExchRate;

	pesosExchRate = 0.00027;
	raeisExchRate = 0.19;
	solesExchRate = .28;

	dollars = (pesos*pesosExchRate) + (reais*raeisExchRate) + (soles*solesExchRate);

	cout << "Equivalent US Dollars: " << dollars << endl;
}