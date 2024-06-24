#include "stdafx.h"
#include "Constants.h"

#include "FillRand.h"
#include "Print.h"
#include "Print.cpp"
#include "Sort.h"
#include "Sort.cpp"
#include "Statistics.h"
#include "Statistics.cpp"
#include "Shift.h"
#include "Shift.cpp"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;						//Sum of array elements
	cout << "Средне-арифметичнское элементов массива: " << Avg(arr, n) << endl;		//Avarage of array elemnts
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	int number_of_shifts;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;				//Enter number of shifts
	//shiftLeft(i_arr, I_SIZE, number_of_shifts);
	//Print(i_arr, I_SIZE);
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;				//Enter number of shifts
	//shiftRight(i_arr, I_SIZE, number_of_shifts);
	//Print(i_arr, I_SIZE);
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, D_SIZE) << endl;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;				//Enter number of shifts
	shiftLeft(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;				//Enter number of shifts
	shiftRight(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
}