#pragma once
#include "Attestat.h"
#include "MedKarta.h"
#include "Voennik.h"
#include "Photo.h"
#include "Predicate.h"

class Documents
{


private:

	Attestat attestat;
	Voennik voennik;
	MedKarta medKarta;
	Photo photo;

public:

	Documents();
	Documents(Attestat, Voennik, MedKarta, Photo);
	~Documents();

	void const getDocsData();
	void setDocsData();	
	bool checkInputNum(int);
};