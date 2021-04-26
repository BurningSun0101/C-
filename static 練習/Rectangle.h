#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
public:
	Rectangle();
	Rectangle(double,double);
	void setWidth(double);
	double getWidth() const;
	void setHeight(double);
	double getHeight() const;
	double getArea() const;
	static int getNumOfRect();
	void print();

private:
	double height, width;
	static int numOfRect;
};


#endif // !Rectangle_h


