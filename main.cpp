#include<iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
	double width, height;
	Rectangle ractanglearrea[3];
	for (int k = 0; k < 3; k++)
	{
		cin >> width;
		cin >> height;
		ractanglearrea[k].setWidth(width);
		ractanglearrea[k].setHeight(height);
	}

	for (int j = 0; j < 3; j++)
	{
		cout << ractanglearrea[j].getWidth() << ' ' << ractanglearrea[j].getHeight() << ' ' << ractanglearrea[j].getArea() << endl;
	}
	cout << ractanglearrea->getNumOfRect()<<" "<<"Rectangles";
}