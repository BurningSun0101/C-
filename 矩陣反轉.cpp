// ConsoleApplication8.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int Array_Data[5][5];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> Array_Data[i][j];
	for (int i = 0; i < 5; i++)
	{
		for (int z = 0;z < i;z++)
		{
			Array_Data[i][z] = 0;
		}
	}
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{
			if (Array_Data[i][j] != 0)
				cout << Array_Data[i][j] << " ";

		}

}

