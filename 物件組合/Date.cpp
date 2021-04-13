#include "Date.h"


Date::Date()
{

}
Date::Date(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}
void Date::setMonth(int m)
{
	month = m;
}
void Date::setDay(int d)
{
	day = d;
}
void Date::setYear(int y)
{
	year = y;
}
int Date::getMonth()
{
	return month;
}
int Date::getDay()
{
	return day;
}
int Date::getYear()
{
	return year;
}
void Date::print()
{
	cout << month << "/" << day << "/" << year;
}