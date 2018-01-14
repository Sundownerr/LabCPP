#pragma once
#include "Predicate.h"

class MedKarta
{
	

private:

	int id;
	bool isOk;

public:

	MedKarta();
	~MedKarta();

	void const getMedKartaId();
	void setMedKartaId();
	void getMedKartaOk();
	void setMedKartaOk();

};