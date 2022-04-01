#include<iostream>
using namespace std;
#define tab "\t"
#define delimiter "\n-------------------------------\n"
//#define ADDITION
void main()
{
	setlocale(LC_ALL, "");
	const int m = 3; //количество строк
	const int n = 3; //количество столбцов (элементов строки)
	int A[m][n] = {};
	int B[m][n] = {};
	// Заполняем матрицу случайными числами:
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand () % 10;
			B[i][j] = rand () % 10;
		}
	}
	// Выводим матрицу А на экран:
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << tab;

		}
		cout << endl;
	}
	cout << delimiter;

	// Выводим матрицу В на экран:
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}
#ifdef ADDITION
	cout << delimiter;
	// сложение матриц
	int C[m][n] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
#endif // ADDITION
	// умножение матрицы
	int C[m][n] = {};
	for (int i = 0; i < m; i++)
	{
		// i - выбирает строку матрицы А
		for (int j = 0; j < n; j++)
		{
			// j - выбирает столбец матрицы В
			for (int k = 0; k < n; k++)
			{
				// k - перебирает элементы выбранной строки матрицы А 
				// и выбранного столбца матрицы В
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	cout << delimiter;
	// Вывод результата на экран
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << C[i][j] << tab;
		}
		cout << endl;
	}

}