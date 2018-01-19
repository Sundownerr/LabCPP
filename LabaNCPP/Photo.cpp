#include "Photo.h"
using namespace std;

Photo::Photo()
{
	
	cout << "\nPhoto default class constructor has been initialised . . ." << endl;
}

Photo::~Photo()
{
	cout << "Photo class destructor has been initialised . . ." << endl;
}

void Photo::setPhotoOk()
{
	int num = 0;

	do
	{
		cout << "If Photo have passed the verification enter 1 otherwise enter 2: ";
		cin >> num;
	} 
	while (num < 1 || num > 2);

	isOk = checkNum(num);
}

void const Photo::getPhotoOk()
{
	if (isOk)
	{
		cout << "Photo have passed verification" << endl;
	}
	else
	{
		cout << "Photo haven't passed verification" << endl;
	}
}
