/* 
Þñóïîâ Ò.
Äç-14
03.07.2019
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


template <typename T>
void dynamicMemoryAllocation(T *&arr, int size);

template <typename T>
void randArray(T arr[], int size);

template <typename T>
void printArray(T arr[], int size);

template <typename T>
void deleteArray(T arr[], int size);

template <typename T>
void addElement(T *&arr, int &size, int value);

template <typename T>
void changeElement(T *&arr, int &size, int index, int value);

template <typename T>
void deleteElement(T *&arr, int &size, int index);


int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "RUS");
	cout << "theme: Homework-14." << endl;
	cout << "date: 03.07.2019" << endl;
	cout << "autor: Timur Y." << endl;
	cout << "\n";
	
	int size = 5;
	int * arr;
	cout << endl << "dynamicMemoryAllocation() and randArray()" << endl << endl;
	dynamicMemoryAllocation(arr, size);
	
	randArray(arr, size);
	printArray(arr, size);
//	deleteArray(arr, size);  
	
	int value = 51;
	cout << endl  << endl << endl << "addElement()" << endl << endl;
	
	addElement(arr, size, value);
	printArray(arr, size);
	
	changeElement(arr, size,1,value);
	cout << endl  << endl <<endl << "changeElement()" << endl << endl;
	printArray(arr, size);
	
	deleteElement(arr, size, 1);
	cout << endl  << endl <<endl << "deleteElement()" << endl << endl;
	printArray(arr, size);
	cout << endl  << endl;
	
	
	
	
	return 0;
}

//a
template <typename T>
void dynamicMemoryAllocation(T *&arr, int size){
	arr = new int[size];	
}

//b
template <typename T>
void randArray(T arr[], int size){
	srand(time(NULL));
	for(int i = 0; i < size; i++){
		*(arr+i) = rand()%10;
	}	
}

//c
template <typename T>
void printArray(T arr[], int size){
	srand(time(NULL));
	for(int i = 0; i < size; i++){
		std::cout << *(arr+i) << "\t";
	}	
}

//d
template <typename T>
void deleteArray(T arr[], int size){
	delete [] arr;
	arr = nullptr;	
}



//e
template <typename T>
void addElement(T *&arr, int &size, int value){
	
	int *arr_2 = new int[size + 1];
	for(int i = 0; i < size; i++){
		arr_2[i] = arr[i];		
	}	
	arr_2[size] = value;
	size++;
	delete [] arr;
	arr = arr_2;
	
	
}

//f
template <typename T>
void changeElement(T *&arr, int &size, int index, int value){
	
	int *arr_2 = new int[size];
	for(int i = 0; i < size; i++){
		arr_2[i] = arr[i];
		if(arr_2[i] == arr_2[index]){
			arr_2[i] = value;
		}	
	}	
	
	
	delete [] arr;
	arr = arr_2;
	
	
}

//e
template <typename T>
void deleteElement(T *&arr, int &size, int index){
	
	int *arr_3 = new int[size-1];
	int k = 0;
	for(int i = 0; i < size; i++){
		
		
		if(i == index){
			k = k + 1;
			arr_3[i] = arr[k];
		}
		arr_3[i] = arr[k];	
		k++;	
	}	
	
	delete [] arr;
	arr = arr_3;
	size--;
	
}
