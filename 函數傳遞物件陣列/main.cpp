#include<iostream>
#include"Rectangle.h"

using namespace std;

void sum(Rectangle rectArray[], int size)
{
	double total=0;
	for (int j = 0; j < size; j++)
	{
		total += rectArray[j].getArea();
	}
	cout << "Total:" << total << endl;
}

void printRectangleArray(Rectangle rectArray[], int size)
{
	for (int k = 0; k < size; k++)
	{
		cout << rectArray[k].getWidth() << ' ' << rectArray[k].getHeight() << ' ' << rectArray[k].getArea() << endl;
	}
}

int main()
{
	double width, height;
	Rectangle rectangle[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> width >> height;
		rectangle[i].setWidth(width);
		rectangle[i].setHeight(height);
	}
	printRectangleArray(rectangle, 4);
	sum(rectangle, 4);
}