#include "Rectangle.h"
#include<iostream>
using namespace std;

int Rectangle::numOfRect = 0;

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
	numOfRect++;
}
Rectangle::Rectangle(double w, double h)
{
	width = w;
	height = h;
	numOfRect++;
}
void Rectangle::setWidth(double w)
{
	width = w;
}
double Rectangle::getWidth() const
{
	return width;
}
void Rectangle::setHeight(double h)
{
	height = h;
}
double Rectangle::getHeight() const
{
	return height;
}
double Rectangle::getArea() const
{
	return width * height;
}
int Rectangle::getNumOfRect()
{
	return numOfRect;
}

void Rectangle::print()
{
	cout << width << ' ' << height << ' ' << width * height << endl;
}