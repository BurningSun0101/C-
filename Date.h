#ifndef Date_h
#define Date_h
#include<iostream>
#include<string>
using namespace std;

class Date
{
public:
	Date();
	Date(int, int, int);
	void setMonth(int);
	void setDay(int);
	void setYear(int);
	int getMonth() const;
	int getDay() const;
	int getYear() const;
	void print();
private:
	int month, day, year;
};


#endif // !Date_h


