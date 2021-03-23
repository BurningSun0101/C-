#include "Student.h"

Student::Student()
{
	
}
Student::Student(string Nname, Date Nbirthday, int Nscore)
{
	name = Nname;
	birthDay = Nbirthday;
	score = Nscore;
}
void Student::setName(string Nname)
{
	name = Nname;
}
string Student::getName() const
{
	return name;
}
void Student::setDate(Date Nbirthday)
{
	birthDay = Nbirthday;
}
Date Student::getDate() const
{
	return birthDay;
}
void Student::setScore(int Nscore)
{
	score = Nscore;
}
int Student::getScore() const
{
	return score;
}
void Student::print()
{
	cout << name << " ";
	birthDay.print();
	cout << " " << score << endl;
}