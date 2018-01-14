#include "MedKarta.h"
#include <iostream>
using namespace std;


MedKarta::MedKarta()
{
	cout << "Вызван конструктор класса MedKarta" << endl;
	MedKarta::setMedKartaId();
	MedKarta::setMedKartaOk();
}

MedKarta::~MedKarta()
{
	cout << "Вызван деструктор класса MedKarta" << endl;
}

void const MedKarta::getMedKartaId()
{
	cout << "Номер медицинской карты: " + id << endl;
}

void MedKarta::setMedKartaId()
{
	int testId = 0;

	do
	{
		cout << "Введите номер медицинской карты: " << endl;
		cin >> testId;
	} 
	while (testId < 0);
}

void MedKarta::setMedKartaOk()
{
	int num = 0;

	do
	{
		cout << "Если медицинская карта прошла проверку - введите 1, если не прошла - введите 2: ";
		cin >> num;
	} 
	while (num < 1 || num > 2);

	isOk = checkNum(num);
}

void MedKarta::getMedKartaOk()
{
	if (isOk)
	{
		cout << "Медицинская карта прошла проверку" << endl;
	}
	else
	{
		cout << "Медицинская карта не прошла проверку" << endl;
	}
}
