#include "Score.h"

Score::Score()
{

}
Score::Score(string N, int M)
{
	name = N;
	math = M;
}
void Score::setName(string N)
{
	name = N;
}
void Score::setMath(int M)
{
	math = M;
}
string Score::getName()
{
	return name;
}
int Score::getMath()
{
	return math;
}
void Score::print()
{
	cout << name << ' ' << math;
}