#include "Voennik.h"
#include <iostream>
using namespace std;


Voennik::Voennik()
{
	cout << "Voennik class constructor has been initialised" << endl;
	Voennik::setVoennikId();
	Voennik::setVoennikOk();
}

Voennik::~Voennik()
{
	cout << "Voennik class destructor has been initialised" << endl;
}

void const Voennik::getVoennikId()
{
	cout << "Military documents number: " + id << endl;
}

void Voennik::setVoennikId()
{
	int testId = 0;
	
	do
	{
		cout << "Enter a military documents number: " << endl;
		cin >> testId;
	} 
	while (testId < 0);
}

void Voennik::setVoennikOk()
{
	int num = 0;

	do
	{
		cout << "If Military documents have passed the verification enter 1 otherwise enter 2: ";
		cin >> num;
	} 
	while (num < 1 || num > 2);

	isOk = checkNum(num);
}

void Voennik::getVoennikOk()
{
	if (isOk)
	{
		cout << "Military documents have passed verification" << endl;
	}
	else
	{
		cout << "Military documents haven't passed verification" << endl;
	}
}
