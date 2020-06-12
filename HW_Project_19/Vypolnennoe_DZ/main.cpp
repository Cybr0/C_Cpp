/* 
Юсупов Т.
28.06.2019
Алгоритмы, оценка скорости алгоритмов
*/

#include <iostream>
using namespace std; 
#include <stdlib.h>
#include <time.h>
#include <chrono>

#include "randArrey.h"
#include "insertSort.h"
#include "shakerSort.h"
#include "bubbleSort.h"
#include "selectSort.h"
#include "yakerSort.h"
//#include "qsort.h"
#include "doMagic.h"








int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	srand (time(NULL));
	cout << "тема: ДЗ-12" << endl;
	cout << "дата: 28.06.2019" << endl;
	cout << "автор: Юсупов Т." << endl;
	cout << "\n\n" << endl;
	
	while(true){
		cout << "1. Создать массив." << endl;
		cout << "2. Выход." << endl;	
		cout << ">";
		int buttonMenu;
		cin >> buttonMenu;
		
		switch(buttonMenu){
			case 1:
			{
				
				system("cls");
				cout << "Введите размер массива, который будет отсортирован." << endl;
				cout << ">";
				int size;
				cin >> size;
				int *arr = new int[size];
				cout << endl;
				void (*arrSortPointer[5])(int a[], int size) = {selectSort, bubbleSort, yakerSort, shakerSort, insertSort};
	
				//	quickSortR;  // не смог засунуть в массив так, как аргументы разные
	
				float topArrey[5];
				for (int i = 0; i < 5; i++)
				{
					randArrey (arr, size);
					auto start = chrono::high_resolution_clock::now();
					(*arrSortPointer[i])(arr, size);
					auto end = chrono::high_resolution_clock::now();
					chrono::duration<float> duration = end - start;
					topArrey[i] = duration.count();	
					//	cout << topArrey[i] << endl;
				}
	
				doMagic(topArrey, 5);
					cout << endl << endl;
				delete [] arr;
				arr = nullptr;
			
				break;}
			
			
			
			
			case 2:{
				return 0;
				break;
			}
	
			default:{
				cout <<"\nВы ввели некорректное число." << endl;
				cout <<"Ошибка." << endl;
				return 0;
				break;
			}

		}
	}

	
	return 0;
}


