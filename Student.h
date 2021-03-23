#ifndef Student_h
#define Student_h
#include"Date.h"
#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	Student();
	Student(string ,Date,int);
	void setName(string);
	string getName() const;
	void setDate(Date);
	Date getDate() const;
	void setScore(int);
	int getScore() const;
	void print();

private:
	string name;
	Date birthDay;
	int score;
	
};


#endif 
