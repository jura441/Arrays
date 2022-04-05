#include<iostream>
using namespace std;
#define tab "\t"



void main()
{
	setlocale(LC_ALL, "");

	const int ROWS = 8;
	const int COLS = 5; // ���������� �������� (��������� ������)
	int arr[ROWS][COLS] = {};

		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = rand() % 100;
			}
		}
		cout << "�������� ������:\n";
		// ����� ��������� ������� �� �����:
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << tab;
			}
			cout << endl;
		}
		//���������� �������:
		int iteration = 0;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				for (int k = i; k < ROWS; k++)
				{
					//		condition ? value : value2;
					for (int l = (k == i ? j + 1 : 0); l < COLS; l++)
					{
						if (arr[k][l] < arr[i][j])
						{
							int buffer = arr[i][j];
							arr[i][j] = arr[k][l];
							arr[k][l] = buffer;
						}
						iteration++;
					}
				}
			}
		}
		cout << "������ ������������ �� " << iteration << " ��������\n";
		cout << "��������������� �������: \n";
		// ����� ���������������� ������� �� �����:
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << tab;
			}
			cout << endl;
		}

}