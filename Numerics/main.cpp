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
	const int SIZE = 32; // Максимально возможная разрядность введенного числа
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
	int hexadecimal; // Десятичное число вводимое с клавитуры
	const int SIZE = 32; 
	bool bin[SIZE] = {}; 
	//int n = 0; //фактическая разрядность числа
	int i = 0; // или так
	cout << "Введите десятичное число: "; cin >> hexadecimal;
	for (; hexadecimal; i++, hexadecimal /= 16)
	{
		bin[i] = hexadecimal % 16;

		//n++;
	}
	//for (int i = n - 1; i >= 0; i--)
	for (i--; i >= 0; i--)
	{
		cout << bin[i];
	}
#endif HEXADECIMAL


}
