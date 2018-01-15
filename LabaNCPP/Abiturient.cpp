#include "Abiturient.h"
#include <string>
#include <iostream>
using namespace std;

Abiturient::Abiturient()
{
	setAbiturientInfo();
	cout << "Abiturient class constructor has been initialised" << endl;
}

Abiturient::~Abiturient()
{
	cout << "Abiturient class destructor has been initialised" << endl;
}

string Abiturient::getAbiturientInfo()
{
	return name + " " + surname + " " + group;
}

void Abiturient::setAbiturientInfo()
{
	cout << "Enter abiturient name: ";
	cin >> name;
	cout << "Enter abiturient surname: ";
	cin >> surname;
	cout << "Enter abiturient group: ";
	cin >> group;
}

vector<int> Abiturient::setChosenFaculty(const int n)
{
	vector<int> vec;
	int facultyId;
	string output;

	vec.resize(n);

	for (int i = 0; i < n; i++)
	{
		
		cout << "Enter " + to_string(i) + " chosen faculty: ";
		cin >> facultyId;
		vec.push_back(facultyId);
	}

	return vec;
}

