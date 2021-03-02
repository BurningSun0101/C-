#include "Rectangle.h"

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
}

Rectangle::Rectangle(double newwidth, double newheight)
{
	width = newwidth;
	height = newheight;
}

double Rectangle::getArea()
{
	return width * height;
}
double Rectangle::getPerimeter()
{
	return (width + height) * 2;
}

void Rectangle::setWidth(double width1)
{
	width = width1;
}

void Rectangle::setHeight(double height1)
{
	height = height1;
}