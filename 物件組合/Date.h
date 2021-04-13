#include<iostream>
#ifndef Date_h
#define Date_h

using namespace std;

class Date
{
public:
	Date();
	Date(int, int, int);
	void setMonth(int);
	void setDay(int);
	void setYear(int);
	int getMonth();
	int getDay();
	int getYear();
	void print();

private:
	int month, day, year;
};


#endif // !Date_h
