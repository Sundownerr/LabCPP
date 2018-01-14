#include "Attestat.h"
#include <iostream>
using namespace std;

Attestat::Attestat()
{
	cout << "������ ����������� ������ Attestat" << endl;
	Attestat::setAttestatId();
	Attestat::setAttestatOk();
}

Attestat::~Attestat()
{
	cout << "������ ���������� ������ Attestat" << endl;
}

void const Attestat::getAttestatId()
{
	cout << "����� ���������: " + id << endl;
}

void Attestat::setAttestatId()
{
	int testId = 0;
	
	do
	{
		cout << "������� ����� ���������: " << endl;
		cin >> testId;
	} 
	while (testId < 0);
}

void Attestat::setAttestatOk()
{
	int num = 0;

	do
	{
		cout << "���� �������� ������ �������� - ������� 1, ���� �� ������ - ������� 2: ";
		cin >> num;
	} 
	while (num < 1 || num > 2);
	
	isOk = checkNum(num);
}

void Attestat::getAttestatOk()
{
	if (isOk)
	{
		cout << "�������� ������ ��������" << endl;
	}
	else
	{
		cout << "�������� �� ������ ��������" << endl;
	}
}
