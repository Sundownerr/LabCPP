#include <iostream>
#include "Documents.h"

using namespace std;

Documents::Documents(Attestat a, Voennik v, MedKarta m, Photo p)
{
	attestat = a;
	voennik = v;
	medKarta = m;
	photo = p;

	cout << "Вызван конструктор класса Documents" << endl;
}

Documents::~Documents() 
{
	cout << "Вызван деструктор класса Documents" << endl;
}


void const Documents::getDocsData()
{
	int inputNumber = 0;	
	
	do 
	{
		cout << "Введите цифру для вывода информации по желаемому документу: \n1 - Аттестат\n2 - Медицинская карта\n3 - Военные документы\n4 - Фотография\n5 - Вывести информацию по всем документам" << endl;
		cin >> inputNumber;
	} 
	while (checkInputNum(inputNumber));
	
	switch (inputNumber)
	{
	case 1:
		attestat.getAttestatId();
		attestat.getAttestatOk();
	case 2:
		medKarta.getMedKartaId();
		medKarta.getMedKartaOk();
	case 3:
		voennik.getVoennikId();
		voennik.getVoennikOk();
	case 4:
		photo.getPhotoOk();

	break;
	}
}

bool Documents::checkInputNum(int inputNumber)
{
	return inputNumber >= 1 & inputNumber <= 5;
}