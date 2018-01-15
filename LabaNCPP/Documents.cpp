#include <iostream>
#include "Documents.h"

using namespace std;

Documents::Documents(Attestat a, Voennik v, MedKarta m, Photo p)
{
	attestat = a;
	voennik = v;
	medKarta = m;
	photo = p;

	cout << "Documents class constructor has been initialised" << endl;
}

Documents::~Documents() 
{
	cout << "Documents class destructor has been initialised" << endl;
}

Documents::Documents()
{
	Attestat attestat;
	Voennik voennik;
	MedKarta medKarta;
	Photo photo;
}

void const Documents::getDocsData()
{
	int inputNumber = 0;	
	
	do 
	{
		cout << "Enter following numbers to show the docment information you want: \n1 - Attestat\n2 - Medical card\n3 - Military documents\n4 - Photo\n5 - Show all documents information" << endl;
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