#include<iostream>
using namespace std;
#define tab "\t"
//#define WORK
#define SORT


void main()
{
	setlocale(LC_ALL, "");
	const int n = 3;
	int A[n][n] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}

	// ������� ����������� �������

	int B[n][n * 2] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = B[i][j + n] = A[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}

	/////////////////////////////////////////////////////
	///////////		��������� ������������:		/////////
	////////////////////////////////////////////////////

	// ��������� ������� ���������:
	int main_diag = 0;
	for (int i = 0; i < n; i++)
	{
	bool product = 1;		// ������������ ��������� ������� ���������
		for (int j = 0; j < n; j++)
		{
			product *= B[j][i + j];
		}
		main_diag += product;
	}
	cout << "������� ���������: " << main_diag << endl;

	// ��������� ��������������� ���������:
	int aux_diag = 0; // aux-Auxilliary (���������������)
	for (int i = 0; i < n; i++)
	{
		int product = 1;
		for (int j = 0; j < n; j++)
		{
			product *= B[n - 1 - j][i + j];
		}
		aux_diag += product;
		
	}
	cout << "�������������� ���������:" << aux_diag << endl;
	cout << "������������ �������:" << main_diag - aux_diag<< endl;

#ifdef WORK
	const int ROWS = 8; //���������� �����
	const int COLS = 5; // ���������� �������� (��������� ������)
	int arr[ROWS][COLS] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
			/*for (int a = 0; a < ROWS; a++)
			{
				for (int b = 0; b < COLS; b++)
				{
					if (arr[a][b] = arr[i][j])
					{
						arr[a][b]--;
						break;
					}
				}
			 }*/
		}
	}

	cout << "�������� ������:\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
#ifdef SORT
	//���������� �������

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int a = 0; a < ROWS; a++)
			{
				for (int b = 0; b < COLS; b++)
				{
					if (arr[a][b] > arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[a][b];
						arr[a][b] = buffer;
					}
				}
			}
		}
	}
#endif // SORT
	cout << "��������������� ������:\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;

	}
}
#endif // WORK
}