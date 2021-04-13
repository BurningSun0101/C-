#include "Rectangle.h"


Rectangle::Rectangle()
{

}
Rectangle::Rectangle(double nw, double nh)
{
	width = nw;
	height = nh;
}
void Rectangle::setWidth(double nw)
{
	width = nw;
}
double Rectangle::getWidth()
{
	return width;
}
void Rectangle::setHeight(double nh)
{
	height = nh;
}
double Rectangle::getHeight()
{
	return height;
}
double Rectangle::getArea()
{
	return width * height;
}