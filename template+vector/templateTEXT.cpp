#include <iostream>
using namespace std;
template <typename T>

void InsertionSort(T list[], int listSize)
{
	for (int i = 1; i < listSize; i++)
	{
		T currentElement = list[i];
		int k;
		for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
		{
			list[k + 1] = list[k];
		}
		list[k + 1] = currentElement;
	}
}

template<typename T>
T BinarySearch(const T list[], T key, int listSize)
{
	int low = 0;
	int high = listSize - 1;

	while (high >= low)
	{
		int mid = (low + high) / 2;
		if (key < list[mid])
			high = mid - 1;
		else if (key > list[mid])
			low = mid + 1;
		else
			return mid;
	}

	return -1;
}

int main() {

	int list1[] = { 1,5,6,2,3,7,9,8,4 };
	double list2[] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };

	int number1, number2, number3;
	double number4, number5, number6;

	cin >> number1 >> number2 >> number3 >> number4 >> number5 >> number6;

	cout << "From:";
	for (int i = 0; i < 9; i++)
	{
		cout << list1[i] ;
		if (i != 9 - 1)
			cout << ',';
	}

	cout << endl;
	cout << "To:";

	InsertionSort(list1, 9);

	for (int i = 0; i < 9; i++)
	{
		cout << list1[i] ;
		if (i != size(list1) - 1)
			cout << ',';
	}
	cout << endl;

	cout << number1 << ' ' << "at" << ' ' << BinarySearch(list1, number1, 9) << endl;
	cout << number2 << ' ' << "at" << ' ' << BinarySearch(list1, number2, 9) << endl;
	cout << number3 << ' ' << "at" << ' ' << BinarySearch(list1, number3, 9) << endl;

	cout << "From:";
	for (int i = 0; i < 9; i++)
	{
		cout << list2[i];
		if (i != 9 - 1)
			cout << ',';
	}

	cout << endl;
	cout << "To:";

	InsertionSort(list2, 9);

	for (int i = 0; i <9; i++)
	{
		cout << list2[i];
		if (i != 9 - 1)
			cout << ',';
	}
	cout << endl;

	cout << number4 << ' ' << "at" << ' ' << BinarySearch(list2, number4, 9) << endl;
	cout << number5 << ' ' << "at" << ' ' << BinarySearch(list2, number5, 9) << endl;
	cout << number6 << ' ' << "at" << ' ' << BinarySearch(list2, number6, 9) << endl;


	system("pause");
	return 0;
}