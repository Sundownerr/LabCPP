#pragma once
#include <string>
#include <vector>
#include "Documents.h"
using namespace std;

class Abiturient
{
private: 
	string name, surname, group;
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
};