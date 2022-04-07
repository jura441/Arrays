#include<iostream>
using namespace std;
#define tab "\t"



void main()
{
	setlocale(LC_ALL, "");

	const int ROWS = 3;
	const int COLS = 4; // количество столбцов (элементов строки)
	int arr[ROWS][COLS] = {};

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	cout << "Исходный массив:\n";
	// Вывод исходного массива на экран:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool already_there = false;
			for (int k = 0; k < i; k++)
			{
				for (int l = 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						already_there = true;
						break;
					}
				}
			}
			for (int l = 0; l < j; l++)
			{
				if (arr[i][j] == arr[i][l])
				{
					already_there = true;
					break;
				}
			}

			if (already_there)continue;

			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				int l = j + 1;
				if(k>i)l = 0;
				for (; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count > 0) cout << arr[i][j] << " повторяется " << count << " раз " << endl;
		}
	}
}