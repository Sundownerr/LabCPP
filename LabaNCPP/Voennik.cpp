#include "Voennik.h"
#include <iostream>
using namespace std;


Voennik::Voennik()
{
	cout << "Вызван конструктор класса Voennik" << endl;
	Voennik::setVoennikId();
	Voennik::setVoennikOk();
}

Voennik::~Voennik()
{
	cout << "Вызван деструктор класса Voennik" << endl;
}

void const Voennik::getVoennikId()
{
	cout << "Номер военного документа: " + id << endl;
}

void Voennik::setVoennikId()
{
	int testId = 0;
	
	do
	{
		cout << "Введите номер военного документа: " << endl;
		cin >> testId;
	} 
	while (testId < 0);
}

void Voennik::setVoennikOk()
{
	int num = 0;

	do
	{
		cout << "Если военный документ прошел проверку - введите 1, если не прошел - введите 2: ";
		cin >> num;
	} 
	while (num < 1 || num > 2);

	isOk = checkNum(num);
}

void Voennik::getVoennikOk()
{
	if (isOk)
	{
		cout << "Военный документ прошел проверку" << endl;
	}
	else
	{
		cout << "Военный документ не прошел проверку" << endl;
	}
}
