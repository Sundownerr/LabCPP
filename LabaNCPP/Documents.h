#pragma once
#include "Attestat.h"
#include "MedKarta.h"
#include "Voennik.h"
#include "Photo.h"
#include "Predicate.h"
#include <iostream>

class Documents : Attestat, Voennik, MedKarta, Photo
{

private:

	Attestat attestat;
	Voennik voennik;
	MedKarta medKarta;
	Photo photo;

	bool checkInputNum(int);

public:

	Documents();
	Documents(Attestat, Voennik, MedKarta, Photo);
	~Documents();

	void const getDocsData();
	void setDocsData();	
	
};