#pragma once
#include <string>
#include <vector>
#include "Documents.h"
#include "KnowlegeTest.h"
using namespace std;

class Abiturient
{
private: 
	string name, surname, group, basis;
	vector<int> chosenFaculty;
	Documents docs;
	int score;
	
	void setAbiturientInfo();
	
public:
	Abiturient();
	~Abiturient();
	
	vector<int> getChosenFaculty();
	vector<int> setChosenFaculty(const int);
	string getAbiturientInfo();

	friend ostream& operator<<(ostream& os, const Abiturient& dt);
};