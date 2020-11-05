#include <iostream>
using namespace std;

class Stack
{
	int const static capacity = 10;
	int top = -1;
	int array[capacity] = {};

public:
	void Push(int x)
	{	
		if (top<10)
		{
			top += 1;
			array[top] = x;
		}
		else
		{
			top = 9;
		}
		
		
	}
	void Pop()
	{
		top -= 1;
	}
	void PrintStack()
	{
		for (int i = 0;i <= top;i++)
			cout << array[top-i]<<" ";
	}

};

int main(int argc, char *argv[])
{
	Stack stack;
	int times, input;
	cin >> times;
	for (int i = 0; i < times; i++) {
		cin >> input;
		stack.Push(input);
	}
	cin >> times;
	for (int i = 0; i < times; i++) {
		stack.Pop();
	}
	stack.PrintStack();
}