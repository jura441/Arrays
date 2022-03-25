#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
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
}