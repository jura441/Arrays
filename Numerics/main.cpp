#include<iostream>
using namespace std;
//#define BINARY
//#define OCTAL
#define HEXADECIMAL

void main()
{
	setlocale(LC_ALL, "");
	
#ifdef BINARY
	int decimal; // Десятичное число вводимое с клавитуры
	const int SIZE = 32; // Максимально возможная разрядность введенного числа
	bool bin[SIZE] = {}; // этот массив будет хранить разряды двоичного числа
	//int n = 0; //фактическая разрядность числа
	int i = 0; // или так
	cout << "Введите десятичное число: "; cin >> decimal;
	for (; decimal; i++, decimal /= 2)
	{
		bin[i] = decimal % 2;

		//n++;
	}
	//for (int i = n - 1; i >= 0; i--)
	for (i--; i >= 0; i--)
	{
		cout << bin[i];
	}
#endif // BINARY


#ifdef OCTAL
	int decimal; // Десятичное число вводимое с клавитуры
	const int SIZE = 11; // Максимально возможная разрядность введенного числа
	double oct[SIZE] = {}; // этот массив будет хранить разряды двоичного числа
	int i = 0; 
	cout << "Введите десятичное число: "; cin >> decimal;
	for (; decimal; i++, decimal /= 8)
	{
		oct[i] = decimal % 8;
	}
	for (i--; i >= 0; i--)
	{
		cout << oct[i];
	}
#endif // OCTAL

#ifdef HEXADECIMAL
	int decimal; // Десятичное число вводимое с клавитуры
	const int SIZE = 8; 
	int hex[SIZE] = {}; 
	//int n = 0; //фактическая разрядность числа
	int i = 0; // или так
	cout << "Введите десятичное число: "; cin >> decimal;
	for (; decimal; i++, decimal /= 16)
	{
		hex[i] = decimal % 16;
	}
	for (i--; i >= 0; i--)
	{
		switch (hex[i])
			{
			case 10: cout << "A"; break;
			case 11: cout << "B"; break;
			case 12: cout << "C"; break;
			case 13: cout << "D"; break;
			case 14: cout << "E"; break;
			case 15: cout << "F"; break;
			default: cout << hex[i];
			}
		 
	}
#endif HEXADECIMAL


}
