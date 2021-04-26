#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
	Rectangle rectangle[3];
	double width, height;
	
	

	for (int i = 0;i < 3;i++)
	{
		cin >> width >> height;
		rectangle[i].setWidth(width);
		rectangle[i].setHeight(height);
		
	}

	for (int i = 0;i < 3;i++)
	{
		rectangle[i].print();
	}
	cout <<rectangle[2].getNumOfRect()<<" Rectangles"
		<< endl;
}