#include "Student.h"

Student::Student()
{

}
Student::Student(string n, Date birth, int scr)
{
	name = n;
	birthDay = birth;
	score = scr;
}
void Student::setName(string n)
{
	name = n;
}
string Student::getName()
{
	return name;
}
void Student::setDate(Date birth)
{
	birthDay = birth;
}
Date Student::getDate()
{
	return birthDay;
}
void Student::setScore(int scr)
{
	score = scr;
}
int Student::getScore()
{
	return score;
}
void Student::print()
{
	cout << name << " ";
	birthDay.print();
	cout << ' ' << score << endl;
}