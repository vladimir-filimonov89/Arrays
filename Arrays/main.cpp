#include<iostream>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];

	//arr[2] = 2048; //��������� � �������� ������� �� ������
	//cout << arr[2] << endl; //��������� � �������� ������� �� ������

	//���� ��������� ������� � ����������:
	cout << "������� �������� �������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	//����� ������� �� ����� � ������ �������:  
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//����� ������� �� ����� � �������� �������:
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//���������� ����� ��������� �������:
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "�������-��������������: " << (double)sum / SIZE << endl;
	
	//����� ������������ � ������������� �������� � �������:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];

	}
	cout << "����������� �������� � �������: " << min << endl;
	cout << "������������ �������� � �������: " << max << endl;
	







}