#include <iostream>
#include <stdlib.h>
#include <stdint.h>
using namespace std;
template <typename T>
void print_array(T *arr, int size){
	for(int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

template <typename T>
void create_array(T *&arr, int size){
	arr = new T[size];
	for(int i = 0; i < size; i++) {
		arr[i] = rand()%100;
	}
}

template <typename T>
T* create_array_ret(T *arr, int size){
	arr = new T[size];
	for(int i = 0; i < size; i++) {
		arr[i] = rand()%100;
	}
	return arr;
}

int main(int argc, char** argv) {
	int size;
	cout << "enter size:";
	cin >> size;
	int *arr; //= new int[size];

	arr = create_array_ret(arr, size);
	print_array(arr, size);
	delete []arr;
	return 0;
}

