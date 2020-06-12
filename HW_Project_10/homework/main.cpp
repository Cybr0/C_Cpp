/*
Функции
14.06.2019
Ахмедов Ботир
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
using namespace std;

void rect(int width = 10, int height = 10){
	for(int i  = 0; i < height; i++){
		for(int z = 0; z < width; z++){
			cout << "* ";
		}
		cout << "\n";
	}
	cout << "\n\n";
}

void rect(int width, int height, char chr ){
	for(int i  = 0; i < height; i++){
		for(int z = 0; z < width; z++){
			cout << chr << " ";
		}
		cout << "\n";
	}
	cout << "\n\n";
}

int max(int a, int b){
	cout << "int max(int a, int b)  ";
	if(a > b){
		return a;
	}else{
		return b;
	}
}

double max(double a, double b){
	cout << "double max(double a, double b)  ";
	if(a > b){
		return a;
	}else{
		return b;
	}
}

double max(double arr[], int size){
	cout << "double max(double arr[], int size)  ";
	double ret_val = 0;
	for(int i = 0; i < size; i++){
		ret_val+=arr[i];
	}
	return ret_val;
}

int max(int arr[], int size){
	cout << "int max(int arr[], int size)  ";
	int ret_val = 0;
	for(int i = 0; i < size; i++){
		ret_val+=arr[i];
	}
	return ret_val;
}

int abs(int value){
	cout << "int abs() ";
	if(value < 0){
		value *= (-1);
	}
	return value;
}

double abs(double value){
	cout << "double abs() ";
	if(value < 0){
		value *= (-1);
	}
	return value;
}

#define PI 3.14
#define AR_SIZE 10
#define ABS(X) (((X) < 0)? -(X) : X)


template <typename T, typename T1> T MyPow (T value, T1 step)
{
	  T ret_val = 1;
	  for(int i  = 0; i < step; i++){
	  	ret_val *= value;	
	  }
	  return ret_val;
}

void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Rus");
	
	//SetColor('a');
	cout << "Функции\n";
	cout << "тема: параметры по умолчанию\n";
	cout << "дата:14.06.2019\n";
	cout << "автор: Ахмедов Ботир\n";
	cout << "\n\n\n";
	cout << PI;
	
	int a[AR_SIZE];
	rect(5,5);
	rect(3, 5, 'p');
	
	int ia = 2;
	int ib = 4;
	
	double da = 3.14;
	double db = 2.21;
	
	const int dsize = 5;
	double darr[dsize] = {0.1,2.35,4.25,3.00,1.32};
	
	const int isize = 5;
	int iarr[isize] = {3,2,1,6,7};
	
	cout << max(ia, ib) << endl<<endl;
	cout << max(da, db) << endl<<endl;
	cout << max(darr, dsize) << endl<<endl;
	cout << max(iarr, isize) << endl<<endl;
	
	cout << MyPow(5,2) << endl; //float(5)
	cout << MyPow(0.5,2.0) << endl;
	cout << MyPow(5,2) << endl;
	
	return 0;
}
