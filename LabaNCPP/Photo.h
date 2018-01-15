#pragma once
#include "Predicate.h"
#include <iostream>
#include <string>

class Photo
{


private:

	bool isOk;

public:

	Photo();
	~Photo();
	
	void const getPhotoOk();
	void setPhotoOk();

};