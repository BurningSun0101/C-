#ifndef BMI_h
#define BMI_h
#include<iostream>
#include<string>
using namespace std;
class BMI
{
public:
	BMI();
	BMI(string nname,double nweight,double nheight);
	double getBMI();
	string getName();
	void setWeight(double Nweight);
	void setHeight(double Nheight);
	void setName(string nname);


private:
	string name;
	double weight;
	double height;
};


#endif // !BMI_h


