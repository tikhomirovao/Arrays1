#pragma once
#include "Constants.h"
template<typename T>T Sum(T arr[], const int n);
template<typename T>T Sum(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T arr[], const int n);
template<typename T>double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T minValueIn(T arr[], const int n);
template<typename T>T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T maxValueIn(T arr[], const int n);
template<typename T>T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);