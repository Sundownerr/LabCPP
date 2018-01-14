#include "Attestat.h"
#include <iostream>
using namespace std;

Attestat::Attestat()
{
	cout << "Вызван конструктор класса Attestat" << endl;
	Attestat::setAttestatId();
	Attestat::setAttestatOk();
}

Attestat::~Attestat()
{
	cout << "Вызван деструктор класса Attestat" << endl;
}

void const Attestat::getAttestatId()
{
	cout << "Номер аттестата: " + id << endl;
}

void Attestat::setAttestatId()
{
	int testId = 0;
	
	do
	{
		cout << "Введите номер аттестата: " << endl;
		cin >> testId;
	} 
	while (testId < 0);
}

void Attestat::setAttestatOk()
{
	int num = 0;

	do
	{
		cout << "Если аатестат прошел проверку - введите 1, если не прошел - введите 2: ";
		cin >> num;
	} 
	while (num < 1 || num > 2);
	
	isOk = checkNum(num);
}

void Attestat::getAttestatOk()
{
	if (isOk)
	{
		cout << "Аттестат прошел проверку" << endl;
	}
	else
	{
		cout << "Аттестат не прошел проверку" << endl;
	}
}
