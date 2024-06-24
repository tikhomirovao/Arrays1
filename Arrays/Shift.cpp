#include"Shift.h"
void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(int arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < 1; i++)
	{
		{
			for (int j = 0; j < ROWS; j++)
			{
				int temp = arr[j][0];
				for (int k = 0; k < COLS - 1; k++)
				{
					arr[j][k] = arr[j][k + 1];
				}
				arr[j][COLS - 1] = temp;
			}
		}
	}
}
void shiftLeft(double arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < 1; i++)
	{
		{
			for (int j = 0; j < ROWS; j++)
			{
				int temp = arr[j][0];
				for (int k = 0; k < COLS - 1; k++)
				{
					arr[j][k] = arr[j][k + 1];
				}
				arr[j][COLS - 1] = temp;
			}
		}
	}
}
void shiftLeft(char arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < 1; i++)
	{
		{
			for (int j = 0; j < ROWS; j++)
			{
				int temp = arr[j][0];
				for (int k = 0; k < COLS - 1; k++)
				{
					arr[j][k] = arr[j][k + 1];
				}
				arr[j][COLS - 1] = temp;
			}
		}
	}
}
void shiftRight(int arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}
void shiftRight(double arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}
void shiftRight(char arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}
void shiftRight(int arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			int temp = arr[j][COLS - 1];
			for (int k = COLS - 1; k >= j - 1; k--)
			{
				arr[j][k] = arr[j][k - 1];
			}
			arr[j][0] = temp;
		}
	}
}
void shiftRight(double arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			int temp = arr[j][COLS - 1];
			for (int k = COLS - 1; k >= j - 1; k--)
			{
				arr[j][k] = arr[j][k - 1];
			}
			arr[j][0] = temp;
		}
	}
}
void shiftRight(char arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			int temp = arr[j][COLS - 1];
			for (int k = COLS - 1; k >= j - 1; k--)
			{
				arr[j][k] = arr[j][k - 1];
			}
			arr[j][0] = temp;
		}
	}
}