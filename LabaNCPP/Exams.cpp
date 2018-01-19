#include "Exams.h"


Exams::Exams()
{
	facultyExamsScore.push_back(20.0);
	facultyExamsScore.push_back(40.0);
	facultyExamsScore.push_back(30.0);
	facultyExamsScore.push_back(70.0);
	facultyExamsScore.push_back(60.0);
}

bool Exams::getStatus()
{
	return this->havePassed;
}

void Exams::setFacultyExam(int facultyID)
{
	if (facultyID == 1)
	{
		scoreToPass = averageScoreToPass(facultyExamsScore[1], facultyExamsScore[2], facultyExamsScore[4]);
	}
	else if (facultyID == 2)
	{
		scoreToPass = averageScoreToPass(facultyExamsScore[3], facultyExamsScore[5], facultyExamsScore[1]);
	}
	else if (facultyID == 3)
	{
		scoreToPass = averageScoreToPass(facultyExamsScore[5], facultyExamsScore[1], facultyExamsScore[2]);
	}
	else if (facultyID == 4)
	{
		scoreToPass = averageScoreToPass(facultyExamsScore[5], facultyExamsScore[1], facultyExamsScore[2]);
	}
}

double Exams::averageScoreToPass(double score, ...)
{
	double *p = &score;       
	double sum = 0, count = 0;

	while (*p)         
	{
		sum += (*p);         
		p++;             
		count++;        
	}

	return ((sum) ? sum / count : 0);    
}