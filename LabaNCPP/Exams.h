#pragma once
#include "Abiturient.h"
#include "KnowlegeTest.h"
#include <vector>
#include <math.h>
using namespace std;

class Exams : KnowlegeTest
{
private:

	vector<double> facultyExamsScore;
	double scoreToPass;

	void setFacultyExam(int);
	double averageScoreToPass(double, ...);
	

public:

	Exams();
	Exams(Abiturient);
	~Exams();

	bool getStatus();
};