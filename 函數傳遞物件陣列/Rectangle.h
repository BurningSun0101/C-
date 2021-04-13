#ifndef Rectangle_h
#define Rectangle_h

class Rectangle
{
public:
	Rectangle();
	Rectangle(double,double);
	void setWidth(double);
	double getWidth();
	void setHeight(double); 
	double getHeight(); 
	double getArea();


private:
	double width, height;
};


#endif // !Rectangle_h
