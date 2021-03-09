#include "BMI.h"

BMI::BMI()
{
	name = "someone";
	weight = 85;
	height = 1.7;
}

BMI::BMI(string nname, double nweight, double nheight)
{
	name = nname;
	weight = nweight;
	height = nheight;
}
double BMI::getBMI()
{
	return weight / (height * height);
}
string BMI::getName()
{
	return name;
}
void BMI::setWeight(double Nweight)
{
	weight = Nweight;
}
void BMI::setHeight(double Nheight)
{
	height = Nheight;
}
void BMI::setName(string Nname)
{
	name = Nname;
}