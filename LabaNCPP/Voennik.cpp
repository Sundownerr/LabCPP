#include "Voennik.h"
#include <iostream>
using namespace std;


Voennik::Voennik()
{
	cout << "������ ����������� ������ Voennik" << endl;
	Voennik::setVoennikId();
	Voennik::setVoennikOk();
}

Voennik::~Voennik()
{
	cout << "������ ���������� ������ Voennik" << endl;
}

void const Voennik::getVoennikId()
{
	cout << "����� �������� ���������: " + id << endl;
}

void Voennik::setVoennikId()
{
	int testId = 0;
	
	do
	{
		cout << "������� ����� �������� ���������: " << endl;
		cin >> testId;
	} 
	while (testId < 0);
}

void Voennik::setVoennikOk()
{
	int num = 0;

	do
	{
		cout << "���� ������� �������� ������ �������� - ������� 1, ���� �� ������ - ������� 2: ";
		cin >> num;
	} 
	while (num < 1 || num > 2);

	isOk = checkNum(num);
}

void Voennik::getVoennikOk()
{
	if (isOk)
	{
		cout << "������� �������� ������ ��������" << endl;
	}
	else
	{
		cout << "������� �������� �� ������ ��������" << endl;
	}
}
