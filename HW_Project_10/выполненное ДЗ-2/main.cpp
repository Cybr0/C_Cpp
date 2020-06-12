#include <iostream>
#include <stdlib.h>
using namespace std;
/*
перегрузка функции ДЗ-10
23.06.02019
Юсупов Тимур
*/

int max(int arr[], int row){
	for (int i = 0; i < row; i++){
			arr[i] = rand() % 10;
//			cout << arr[i] << "\t";

	}
	
	int val = arr[0]; 
	
	for (int i = 0; i < row; i++){
			if (val < arr[i]){
				val = arr[i];
			}
	}
	return val;
}


int max(int arr[3][5], int row, int col){
	for (int i = 0; i < row; i++){
		for (int k = 0; k < col; k++){
			arr[i][k] = rand() % 10;
//			cout << arr[i][k] << "\t";
		}
//		cout << "\n\n\n";
	}
	
	int val = arr[0][0]; 
	
	for (int i = 0; i < row; i++){
		for (int k = 0; k < col; k++){
			if (val < arr[i][k]){
				val = arr[i][k];
			}
		}
	}
	return val;
}


int max(int arr[5][3][3], int xarr, int yarr, int zarr){
	for (int i = 0; i < xarr; i++){
		for (int k = 0; k < yarr; k++){
			for (int j = 0; j < zarr; j++){
				
				arr[i][k][j] = rand() % 10;
//				cout << arr[i][k][j] << "\t";
			}
//			cout << endl;
		}
//		cout << endl;
	}
	
	int val = arr[0][0][0];
	
	for (int i = 0; i < xarr; i++){
		for (int k = 0; k < yarr; k++){
			for (int j = 0; j < zarr; j++){
				if (val < arr[i][k][j]){
					val = arr[i][k][j];
				}
			}
		}
	}
	return val;
}


int max(int a, int b){
	if (a < b){
		return b;
	}
	else if (a = b){
		return a;
	}
	else {
		return a;
	}
}


int max(int a, int b, int c){
	if (a >= b && a >= c){
		return a;
	}
	else if (b >= a && b >= c){
		return b;
	}
	else if (c >= a && c >= b){
		return c;
	}
}

int main() {
	setlocale (LC_ALL, "Rus");
	cout << "тема: перегрузка функции ДЗ-10\n";
	cout << "перегрузка\n";
	cout << "дата: 23.06.2019\n";
	cout << "автор: Юсупов Тимур\n";
	cout << "\n\n\n";
	cout << "ДЗ, перегрузка функции: \n\n";
	
	const int size = 3;	
	int arr[size];
	
	cout << "Одномерный массив - max = " << max(arr, size) << endl;
	
	
	
	const int row = 3;
	const int col = 5;
	int arr2[row][col];
	
	cout << "Двумерный массив - max = " << max(arr2, row, col) << endl;
	
	
	
	
	
	const int xarr = 5;
	const int yarr = 3;
	const int zarr = 3;
	int arr3[xarr][yarr][zarr];
	
	cout << "Трехмерный массив - max = " << max(arr3, xarr, yarr, zarr) << endl;
	
	
	int a = 2;
	int b = 7;
	
	cout << "Из двух целых чисел - max = " << max(a, b) << endl;
	
	
	int a1 = 2;
	int a2 = 5;
	int a3 = 7;
	cout << "Из трех целых чисел - max = " << max(a1, a2, a3) << endl;
	

	
	return 0;
}
