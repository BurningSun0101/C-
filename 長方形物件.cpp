#include<iostream>
#include<iomanip>
using namespace std;

class Rectangle
{
public:
	double width, height;

	Rectangle()
	{
		width = 1;
		height = 1;
	}

	Rectangle(double newwidth, double newheight)
	{
		width = newwidth;
		height = newheight;
	}

	double getArea()
	{
		return width * height;
	}
	double getPerimeter()
	{
		return (width + height) * 2;
	}
};

int main() 
{
	double x, y,p,q;
	cin >> x >> y >> p >> q;
	Rectangle rectangle1(x, y);
	Rectangle rectangle2(p, q);
	

	cout <<fixed<<setprecision(2)<< rectangle1.getArea() << " " << fixed << setprecision(2) << rectangle1.getPerimeter() << endl
		<< fixed << setprecision(2) << rectangle2.getArea() << " " << fixed << setprecision(2) << rectangle2.getPerimeter() << endl;
	rectangle2.width = 2.5;
	rectangle2.height = 5.0;
	
	cout << fixed << setprecision(2) <<rectangle2.getArea() << " " << fixed << setprecision(2) << rectangle2.getPerimeter() << endl;

		

	return 0;
}