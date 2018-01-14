#include "Photo.h"
#include <iostream>
using namespace std;

Photo::Photo()
{
	cout << "Вызван конструктор класса Photo" << endl;
	
	Photo::setPhotoOk();
}

Photo::~Photo()
{
	cout << "Вызван деструктор класса Photo" << endl;
}

void Photo::setPhotoOk()
{
	int num = 0;

	do
	{
		cout << "Если фото прошло проверку - введите 1, если не прошел - введите 2: ";
		cin >> num;
	} 
	while (num < 1 || num > 2);

	isOk = checkNum(num);
}

void const Photo::getPhotoOk()
{
	if (isOk)
	{
		cout << "Фото прошло проверку" << endl;
	}
	else
	{
		cout << "Фото не прошло проверку" << endl;
	}
}
