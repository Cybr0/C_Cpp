// algoritm.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
using namespace std;

template<typename T>
int find(T arr[], int size, T s_item) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == s_item) {
			return i;
		}
	}
	return -1;
}

template <typename T>
void selectSort(T a[], int size) {
	int k;
	T x;

	for (int i = 0; i < size; i++) {   	// i - номер текущего шага
		k = i;
		x = a[i];

		for (int j = i + 1; j < size; j++) {	// цикл выбора наименьшего элемента
			if (a[j] < x) {
				k = j;
				x = a[j];	        // k - индекс наименьшего элемента
			}
		}
		a[k] = a[i];
		a[i] = x;   	// меняем местами наименьший с a[i]
	}
}

template <typename T>
void bubbleSort(T a[], int size) {
	T x;
	for (int i = 0; i < size; i++) {            // i - номер прохода
		for (int j = size - 1; j > i; j--) {     // внутренний цикл прохода
			if (a[j - 1] > a[j]) {
				x = a[j - 1];
				a[j - 1] = a[j];
				a[j] = x;
			}
		}
	}
}

template <typename T>
void insertSort(T a[], int size) {
	T x;
	for (int i = 0; i < size; i++) {  // цикл проходов, i - номер прохода
		x = a[i];
		int j;
		// поиск места элемента в готовой последовательности 
		for (j = i - 1; j >= 0 && a[j] > x; j--) {
			a[j + 1] = a[j];  	// сдвигаем элемент направо, пока не дошли
		}

		// место найдено, вставить элемент
		a[j + 1] = x;
	}
}

int main()
{
	const int size = 5;
	int temp_array[size] = {};
	for (int i = 0; i < size; i++) {
		temp_array[i] = rand() % 10;
		cout << "array[" << i << "] = " << temp_array[i] << "\n";
	}

	cout << "\n\n" << "Sorted:\n";
	insertSort(temp_array, size);
	
	for (int i = 0; i < size; i++) {
		cout << "array[" << i << "] = " << temp_array[i] << "\n";
	}
	cout << endl;
}

