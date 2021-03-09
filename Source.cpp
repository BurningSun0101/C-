#include<iostream>
#include"Score.h"
using namespace std;

int main()
{
	string name1,name2;
	int math1,math2;
	cin >> name1 >> math1;

	Score score1("John", 90), score2("Mary", 80);
	score1.setName(name1);
	score2.setMath(math1);

	score1.print();
	score2.print();
}