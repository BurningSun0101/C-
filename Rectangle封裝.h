#ifndef Rectangle_h
#define Rectangle_h
class Rectangle
{
public:
	Rectangle();
	Rectangle(double newwidth, double newheight);
	double getArea();
	double getPerimeter();
	void setWidth(double width1);
	void setHeight(double height1);

private:
	double width, height;
};

#endif // !Rectangle_h