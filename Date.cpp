#include "Date.h"

Date::Date()
{

}
Date::Date(int m, int d , int y)
{
	year = y;
	month = m;
	day = d;
}
void Date::setMonth(int m)
{
	month = m;
}
void Date::setDay(int d )
{
	day = d;
}
void Date::setYear(int y)
{
	year = y;
}
int Date::getMonth() const
{
	return month;
}
int Date::getDay() const
{
	return day;
}
int Date::getYear() const
{
	return year;
}
void Date::print()
{
	cout << month << '/' << day << '/' << year << ' ';
}