#include <iostream>
#include "Documents.h"

using namespace std;

Documents::Documents(Attestat a, Voennik v, MedKarta m, Photo p)
{
	attestat = a;
	voennik = v;
	medKarta = m;
	photo = p;

	cout << "������ ����������� ������ Documents" << endl;
}

Documents::~Documents() 
{
	cout << "������ ���������� ������ Documents" << endl;
}


void const Documents::getDocsData()
{
	int inputNumber = 0;	
	
	do 
	{
		cout << "������� ����� ��� ������ ���������� �� ��������� ���������: \n1 - ��������\n2 - ����������� �����\n3 - ������� ���������\n4 - ����������\n5 - ������� ���������� �� ���� ����������" << endl;
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