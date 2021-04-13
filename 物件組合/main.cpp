#include<iostream>
#include<string>
#include"Date.h"
#include"Student.h"

using namespace std;

int main()
{
	int month, day, year;
	string name;
	Date birth1(6, 1, 1999), birth2(10, 8, 1997);
	Student student1("John", birth1, 90), student2("Marry", birth2, 80);

	cin >> name >> month >> day >> year;

	student1.setName(name);
	birth2.setMonth(month);
	birth2.setDay(day);
	birth2.setYear(year);
	student2.setDate(birth2);

	student1.print();
	student2.print();


}