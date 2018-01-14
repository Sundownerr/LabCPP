#include "MedKarta.h"
#include <iostream>
using namespace std;


MedKarta::MedKarta()
{
	cout << "������ ����������� ������ MedKarta" << endl;
	MedKarta::setMedKartaId();
	MedKarta::setMedKartaOk();
}

MedKarta::~MedKarta()
{
	cout << "������ ���������� ������ MedKarta" << endl;
}

void const MedKarta::getMedKartaId()
{
	cout << "����� ����������� �����: " + id << endl;
}

void MedKarta::setMedKartaId()
{
	int testId = 0;

	do
	{
		cout << "������� ����� ����������� �����: " << endl;
		cin >> testId;
	} 
	while (testId < 0);
}

void MedKarta::setMedKartaOk()
{
	int num = 0;

	do
	{
		cout << "���� ����������� ����� ������ �������� - ������� 1, ���� �� ������ - ������� 2: ";
		cin >> num;
	} 
	while (num < 1 || num > 2);

	isOk = checkNum(num);
}

void MedKarta::getMedKartaOk()
{
	if (isOk)
	{
		cout << "����������� ����� ������ ��������" << endl;
	}
	else
	{
		cout << "����������� ����� �� ������ ��������" << endl;
	}
}
