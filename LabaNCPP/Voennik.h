#pragma once
#include "Predicate.h"
#include <iostream>
#include <string>

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