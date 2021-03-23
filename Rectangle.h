#ifndef Rectangle_h
#define Rectangle_h

class Rectangle
{
public:
	Rectangle();
	Rectangle(double, double);
	void setWidth(double);
	double getWidth() const;
	void setHeight(double);
	double getHeight() const;
	double getArea() const;
	static int getNumOfRect() ;

private:
	double width, height;
	 static int numOfRect;
};


#endif // !Rectangle_h


