#pragma once
#include "Predicate.h"

class Voennik
{


private:

	int id;
	bool isOk;

public:

	Voennik();
	~Voennik();

	void const getVoennikId();
	void setVoennikId();
	void getVoennikOk();
	void setVoennikOk();

};