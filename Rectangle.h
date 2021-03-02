#ifndef Rectangle_h
#define Rectangle_h
class Rectangle
{
public:
	double width, height;

	Rectangle();
	Rectangle(double newwidth, double newheight);
	double getArea();
	double getPerimeter();

};

#endif // !Rectangle_h