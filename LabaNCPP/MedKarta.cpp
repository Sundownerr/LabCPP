#include "MedKarta.h"
using namespace std;

MedKarta::MedKarta()
{
	cout << "\nMedKarta default class constructor has been initialised\n" << endl;
	MedKarta::setMedKartaId();
	MedKarta::setMedKartaOk();
}

MedKarta::~MedKarta()
{
	cout << "MedKarta class destructor has been initialised" << endl;
}

void const MedKarta::getMedKartaId()
{
	cout << "Medical card number: " + to_string(id) << endl;
}

void MedKarta::setMedKartaId()
{
	int testId = 0;

	do
	{
		cout << "Enter a medical card number: " << endl;
		cin >> testId;
	} 
	while (testId < 0);

	id = testId;
}

void MedKarta::setMedKartaOk()
{
	int num = 0;

	do
	{
		cout << "If Medical card have passed the verification enter 1 otherwise enter 2: ";
		cin >> num;
	} 
	while (num < 1 || num > 2);

	isOk = checkNum(num);
}

void MedKarta::getMedKartaOk()
{
	if (isOk)
	{
		cout << "Medical card have passed verification" << endl;
	}
	else
	{
		cout << "Medical card haven't passed verification" << endl;
	}
}
