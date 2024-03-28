//Numerics
#include<iostream>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

//#define DEC_2_BIN
#define DEC_2_HEX

void main()
{
	setlocale(LC_ALL, "");
	int decimal; //ƒес€чичное число введеное с клавиатуры
	cout << "¬ведите дес€тичное число: "; cin >> decimal;
#ifdef DEC_2_BIN
	const int MAX_CAPACITY = 32; //максимально возможна€ разр€дность двоичного числа
	bool binary[MAX_CAPACITY]{};//этот массив будет хранить разр€ды двоичного числа

	int i = 0;//номер разр€да
	/*for (; decimal > 0; i++)
	{
		binary[i] = decimal % 2;//сорхран€ем младший разр€д числа в массив
		decimal /= 2;//убираем младший двоичный разр€д из дес€тичного числа
	}*/
	for (; decimal; decimal /= 2)binary[i++] = decimal % 2;

	//ƒл€ получени€ конечного результата, нужно переписать остатки от делени€ в обратном пор€дке
	//начина€ с посмледнего результата от делени€
	for (--i; i >= 0; i--)
	{
		cout << binary[i];
	}
	cout << endl;
#endif // DEC_2_BIN
	const int MAX_HEX_CAPACITY = 8;
	char hex[MAX_HEX_CAPACITY] = {};
	int i = 0;

	for (; decimal; i++)
	{
		hex[i] = decimal % 16;//получаем младш 16рич разр€д и сохран€ем его
		decimal /= 16;//убираем младший 16рич разр€д из 10тич числа  
	}
	for (--i; i >= 0; i--)
	{
		if (hex[i] < 10)
			cout << (int)hex[i];
		else
			cout << char(hex[i] + 55);
	}
	cout << endl;


	




}