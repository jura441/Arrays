#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5; 
	int arr[n] = { 1, 2, 3, 4, 5};
	//arr[2] = 123;
	
	/*int minRand;
	int maxRand;
	cout << "Введите минимально возможное случайное число: "; cin >> minRand;
	cout << "Введите максимально возможное случайное число: "; cin >> maxRand;*/


	
	//cout << "Введите элементы массива (" << n << " шт):";
	//for (int i = 0; i < n; i++)
	//{
	//	//cin >> arr[i];
	//	//arr[i] = rand()% 50 + 50;
	//	arr[i] = rand() % (maxRand - minRand) + minRand;
	//}
	// вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	// вывод массива на экран в обратном порядке:
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	// Сумма элементов массива:
	//int sum = 0;
	//for (int i = 0; i < n; i++)
	//{
	//	sum += arr[i];
	//}
	//cout << "Сумма элементов массива: " << sum << endl;
	//cout << "Среднее арифметичское элементов массива: " << sum / n << endl;
	//// минимальное и максимальное значение
	//int min, max;
	//min = max = arr[0]; 
	//for (int i = 0; i < n; i++)
	//{
	//	if (arr[i] < min)min = arr[i];
	//	if (arr[i] > max)min = arr[i];
	//}
	//cout << "Минимальное значение: " << min << endl;
	//cout << "Максимальное значение: " << max << endl;

}