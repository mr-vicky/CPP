#ifndef GRADE_H
#define GRADE_H
#include<stdexcept>

class Grade
{
	public:
		char getGrade(int score);
		
	private:
		int score;
		int per;
};

#endif