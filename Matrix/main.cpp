#include<iostream>
using namespace std;
#define tab "\t"
#define delimiter "\n-------------------------------\n"
//#define ADDITION
void main()
{
	setlocale(LC_ALL, "");
	const int m = 3; //���������� �����
	const int n = 3; // ���������� �������� (��������� ������)
	int A[m][n] = {};
	int B[m][n] = {};
	// ��������� ������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand () % 10;
			B[i][j] = rand () % 10;
		}
	}
	// ������� ������� � �� �����:
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << tab;

		}
		cout << endl;
	}
	cout << delimiter;

	// ������� ������� � �� �����:
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
	// �������� ������
	int C[m][n] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
#endif // ADDITION
	// ��������� �������
	int C[m][n] = {};
	for (int i = 0; i < m; i++)
	{
		// i - �������� ������ ������� �
		for (int j = 0; j < n; j++)
		{
			// j - �������� ������� ������� �
			for (int k = 0; k < n; k++)
			{
				// k - ���������� �������� ��������� ������ ������� � 
				// � ���������� ������� ������� �
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	cout << delimiter;
	// ����� ���������� �� �����
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << C[i][j] << tab;
		}
		cout << endl;
	}

}