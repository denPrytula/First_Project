#pragma once
#pragma once
#include <iostream>
#include <cmath>
#include <string.h>
#include <string>
#include <time.h>
#include <malloc.h>
using namespace std;

void print(string x) {
	cout << x;
}
void print(int x) {
	cout << x;
}
void print(float x) {
	cout << x;
}




int Fibo(int arr[], int x) {
	if (x == 0)
		return 0;
	int* p = new int[x] {0, 0, 1, 0, 0};
	for (int i = 1; i < x;i++) {
		arr[i + 1] = arr[i - 1] + arr[i];
	}
}




bool Check(int x) {
	if (x == 2 || x == 3)
		return 1;
	else if (x % 3 == 0 || x % 2 == 0) {
		return 0;
	}
	else
		return 1;
}




void Create_Array(int arr[], int size, int vidnimatu, int max) { //max = max -min, vidnimatu = -min (if min max)
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % max - vidnimatu;
	}
}




void Create_Array2D(int** arr, int size, int size2, int vidnimatu, int max) { //max = max -min, vidnimatu = -min (if min max)
	srand(time(NULL));
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size2; ++j) {
			arr[i][j] = rand() % max - vidnimatu;
		}
	}
}




void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}




void PrintArray2D(int** arr, int size, int size2) {
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size2; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}




void findNum1(int arr[], int size, int num) {
	bool is = true;
	for (int i = 0; i < size; i++) {

		if (num == arr[i]) {
			is = false;
			cout << "Еhe number is under index[" << i << "]" << endl;
		}

	}
	if (is) {
		cout << "Num is not found" << endl;
	}
}



void findNum2(int** arr, int size1, int size2, int num) {
	bool is = true;

	for (int i = 0; i < size1; i++) {
		for (int o = 0; o < size2; o++) {
			if (num == arr[i][o]) {
				is = false;
				cout << "The number is under index[" << i << ", " << o << "]" << endl;
			}
		}
	}
	if (is) {
		cout << "Num is not found" << endl;
	}
}


int ArrSizeRows(int** arr) {

	int rows = _msize(arr) / sizeof(arr[0]); // _msize це функція з бібліотекі <malloc.h> вертає в байтах. я ділю на розмір байтів типу данних масиву і виходить ого к-сть рядків
	return rows;
}


int ArrSizeCols(int** arr) {
	int cols = _msize(arr[0]) / sizeof(arr[0][0]);
	return cols;
}


int SumArr2(int** arr, int size1, int size2) {
	int count = 0;
	for (int i = 0;i < size1; i++) {
		for (int j = 0;j < size2;j++) {
			count += arr[i][j];
		}
	}
	return count;
}


float AvgArr2(int** arr, int size1, int size2) {
	float count = 0;
	for (int i = 0;i < size1; i++) {
		for (int j = 0;j < size2;j++) {
			count += arr[i][j];
		}
	}
	return count / (size1 * size2);
}


int MinArr2(int** arr, int size1, int size2) {
	int change = arr[0][0];
	for (int i = 0;i < size1; i++) {
		for (int j = 0;j < size2;j++) {
			if (change > arr[i][j]) {
				change = arr[i][j];
			}

		}
	}
	return change;
}


int MaxArr2(int** arr, int size1, int size2) {
	int change = arr[0][0];
	for (int i = 0;i < size1; i++) {
		for (int j = 0;j < size2;j++) {
			if (change < arr[i][j]) {
				change = arr[i][j];
			}

		}
	}
	return change;
}


void ReversArr(int* p, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << *(p + size - i - 1) << " ";
	}
	cout << endl;
}

void CopyArr(int* arr, int* arr2,int size) {
	for (int i = 0;i < size; i++) {
		arr2[i] = arr[i];
	}
	for (int i = 0;i < size; i++) {
		cout << arr2[i] << ' ';
	}
}
void CopyReversArr(int* arr, int* arr2, int size) {
	for (int i = 0;i < size; i++) {
		arr2[i] = arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << *(arr2 + size - i - 1) << " ";
	}
	cout << endl;
}

float Summ(float a, float b) {
	return(a + b);
}

float Minus(float a, float b) {
	return(a - b);
}

float Mnoz(float a, float b) {
	return(a * b);
}

float Div(float a, float b) {
	if (b == 0)
		return(0);
	else
		return(a / b);
}

int Calc(int* x, int* y, char* c) {
	switch (*c)
	{
	case('+'): print(Summ(*x, *y)); break;
	case('-'): print(Minus(*x, *y)); break;
	case('*'): print(Mnoz(*x, *y)); break;
	case('/'): if (Div(*x, *y) == 0) { print("ERROR"); }
			 else { print(Div(*x, *y)); }; break;
	}
	return 0;
}