#ifndef Student_h
#define Student_h
#include"Date.h"
#include<string>

class Student
{
public:
	Student();
	Student(string, Date, int);
	void setName(string);
	string getName();
	void setDate(Date);
	Date getDate();
	void setScore(int);
	int getScore();
	void print();

private:
	string name;
	Date birthDay;
	int score;
};

#endif // !Student_h
