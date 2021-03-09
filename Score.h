#ifndef Score_h
#define Score_h
#include<string>
#include<iostream>
using namespace std;

class Score
{
public:
	Score();
	Score(string , int);
	void setName(string N);
	void setMath(int M);
	string getName();
	int getMath();
	void print();


private:
	string name; int math;
};



#endif // Score_h


