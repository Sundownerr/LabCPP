#include "Attestat.h"

using namespace std;

Attestat::Attestat()
{
	cout << "\nAttestat default class constructor has been initialised\n" << endl;	
}

Attestat::~Attestat()
{
	cout << "Attestat class destructor has been initialised" << endl;
}

void const Attestat::getAttestatId()
{
	cout << "Attestat number: " + to_string(id) << endl;
}

void Attestat::setAttestatId()
{
	int testId = 0;
	
	do
	{
		cout << "Enter an attestat number: " << endl;
		cin >> testId;
	} 
	while (testId < 0);

	id = testId;
}

void Attestat::setAttestatOk()
{
	int num = 0;

	do
	{
		cout << "If Attestat have passed the verification enter 1 otherwise enter 2: ";
		cin >> num;
	} 
	while (num < 1 || num > 2);
	
	isOk = checkNum(num);
}

void Attestat::getAttestatOk()
{
	if (isOk)
	{
		cout << "Attestat have passed verification" << endl;
	}
	else
	{
		cout << "Attestat haven't passed verification" << endl;
	}
}
