/* 
ДЗ-13
Юсупов Т.
23.06.2019
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template <typename T>
void randArrey(T arr[], int size);

template <typename T>
void printArrey(T arr[], int size);

template <typename T>
void doMirrorArray(T arr1[], T arr2[], int size);



int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	cout << "theme: Homework 13." << endl;
	cout << "autor: Timur Y." << endl;
	cout << "date: 03.07.2019" << endl;
	cout << "\n\n" << endl;
	srand(time(NULL));
	
	int size;
	size = 10;
	int *arr = new int [size];	
	randArrey(arr, size);	
	printArrey(arr, size);
	
	
	int *arr2 = new int [size];	
	doMirrorArray (arr, arr2, size);
	cout << "\n____________________________________________________________________________\n\n"; 
	printArrey(arr2, size);
	
	cout << "\n____________________________________________________________________________\n\n"; 
	printArrey(arr, size);
	
	
	
	return 0;
}

template <typename T>
void randArrey(T arr[], int size)
{
	for (int i = 0; i < size; i++){
		*(arr+i) = rand() % 10;
	}
}

template <typename T>
void printArrey(T arr[], int size)
{
	for (int i = 0; i < size; i++){
		cout << *(arr+i) << "\t";
	}
}

template <typename T>
void doMirrorArray(T arr1[], T arr2[], int size)
{
	int k = size - 1;
	for (int i = 0; i < size; i++)
	{
		*(arr2+k) = *(arr1+i);
		k--;
	}
}
