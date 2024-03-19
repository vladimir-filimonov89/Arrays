#include<iostream>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
//#define LEKCIYA

void main()
{
	setlocale(LC_ALL, "");
#ifdef LEKCIYA
	const int SIZE = 5;
	int arr[SIZE];

	arr[2] = 2048; //обращение к элементу массива на запись
	cout << arr[2] << endl; //обращение к элементу массива на чтение

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // LEKCIYA
	cout << double() << endl;
	//int() - значение по умолчанию для типа 'int'
	//double() - значение по умолчанию для типа 'double'
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };

	//Вывод исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Сдвиг массива:
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}

	//Вывод сдвинутого массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
//Shiftleft DONE