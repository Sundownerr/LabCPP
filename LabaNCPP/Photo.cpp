#include "Photo.h"
#include <iostream>
using namespace std;

Photo::Photo()
{
	cout << "������ ����������� ������ Photo" << endl;
	
	Photo::setPhotoOk();
}

Photo::~Photo()
{
	cout << "������ ���������� ������ Photo" << endl;
}

void Photo::setPhotoOk()
{
	int num = 0;

	do
	{
		cout << "���� ���� ������ �������� - ������� 1, ���� �� ������ - ������� 2: ";
		cin >> num;
	} 
	while (num < 1 || num > 2);

	isOk = checkNum(num);
}

void const Photo::getPhotoOk()
{
	if (isOk)
	{
		cout << "���� ������ ��������" << endl;
	}
	else
	{
		cout << "���� �� ������ ��������" << endl;
	}
}
