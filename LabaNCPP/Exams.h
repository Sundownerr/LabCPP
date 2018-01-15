#pragma once
#include "Abiturient.h"
#include <vector>
using namespace std;

class Exams
{
private:

	vector<int> facultyExams;

	vector<int> setFacultyExam(int facultyId);

public:

	Exams();
	Exams(Abiturient);

	~Exams();
};