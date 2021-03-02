#include<iostream>
#include<iomanip>
#include"Rectangle.h"
using namespace std;

int main()
{
	double x, y, p, q;
	cin >> x >> y >> p >> q;
	Rectangle rectangle1(x, y);
	Rectangle rectangle2(p, q);


	cout << fixed << setprecision(2) << rectangle1.getArea() << " " << fixed << setprecision(2) << rectangle1.getPerimeter() << endl
		<< fixed << setprecision(2) << rectangle2.getArea() << " " << fixed << setprecision(2) << rectangle2.getPerimeter() << endl;
	rectangle2.width = 2.5;
	rectangle2.height = 5.0;

	cout << fixed << setprecision(2) << rectangle2.getArea() << " " << fixed << setprecision(2) << rectangle2.getPerimeter() << endl;



	return 0;
}