/* 
Юсупов Т.
26.06.2019
Алгоритмы, оценка скорости алгоритмов
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <chrono>


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
void doMagic(T a[], int size = 5) {
	int k;
	T x;
	int like[5] = {1, 2, 3, 4, 5};
	int boo;
	
	for(int i = 0; i < size; i++){
		k = i;
		x = a[i];
		boo = like[i];
		for (int j = i + 1; j < size; j++){
			if(a[j] < x){
				k = j;
				x = a[j];
				boo = like[j];
			}
		}
		a[k] = a[i];
		a[i] = x;
		like[k] = like[i];
		like[i] = boo;
	}
	for(int i = 0; i < size; i++){
		like[i];
		if (like[i] == 1){
			cout <<"Duration of selectSort\t= " << a[i] << " s." << endl;}
		else if (like[i] == 2){
			cout <<"Duration of bubbleSort\t= " << a[i] << " s." << endl;}
		else if (like[i] == 3){
			cout <<"Duration of yakerSort\t= " << a[i] << " s." << endl;}
		else if (like[i] == 4){
			cout <<"Duration of shakerSort\t= " << a[i] << " s." << endl;}
		else if (like[i] == 5){
			cout <<"Duration of insertSort \t= " << a[i] << " s." << endl;}
	}
}








template <typename T>
void selectSort(T a[], int size) {
	int k;
	T x;
	
	for(int i = 0; i < size; i++){
		k = i;
		x = a[i];
		
		for (int j = i + 1; j < size; j++){
			if(a[j] < x){
				k = j;
				x = a[j];
			}
		}
		a[k] = a[i];
		a[i] = x;
	}
}


template <typename T>
void bubbleSort(T a[], int size){
	T x;
	for(int i = 0; i < size; i++){
		for(int j = size-1; j > i; j--){
			if(a[j-1] > a[j]){
				x = a[j-1];
				a[j-1] = a[j];
				a[j] = x;
			}
		}
	}
}


template <typename T>
void yakerSort(T a[], int size){
	int k = size - 1;
	int lb = 1, ub = size - 1;
	T x;
	int nA = 0; int nB = 1; /* придумал улучшение для shakerSort.
Улучшение уменьшает кол. итераций, тем самым ускоряет программу.
3:41  26.06.2019 */
	do{
		// проход снизу вверх
		for (int j = ub; j > nA; j--){ //
			if (a[j-1] > a[j]){
				x = a[j-1];
				a[j-1] = a[j];
				a[j] = x;
				k = j;
			}
		} nA++;
		lb = k+1;
		// проход сверху вниз
		for(int j = nB; j <= ub; j++){ // 
			if (a[j-1] > a[j]){
				x = a[j-1];
				a[j-1] = a[j];
				a[j] = x;
				k = j;
			}
		} nB++; //
		ub = k-1;
	}while (lb < ub);
}


template <typename T>
void shakerSort(T a[], int size){
	int k = size-1;
	int lb=1, ub = size-1;
	T x;
	
	do{
		//проход снизу вверх
		for(int j = ub; j > 0; j--){
			if(a[j-1] > a[j]){
				x = a[j-1];
				a[j-1] = a[j];
				a[j] = x;
				k = j;
			}
		}
		lb = k + 1;
		
		//проход сверху вниз
		for(int j = 1; j <= ub; j++){
			if(a[j-1] > a[j]){
				x = a[j-1];
				a[j-1] = a[j];
				a[j] = x;
				k = j;
			}
		}
		ub = k - 1;
		
	}while (lb < ub);
}


template <typename T>
void insertSort(T a[], int size){
	T x;
	int i, j;
	for (i = 0; i < size; i++){
		x = a[i];
		
		for (j = i-1; j >= 0 && a[j] > x; j--){
			a[j+1] = a[j];
		}
		a[j+1] = x;
	}
}

template<typename T>
void randArrey(T a[], int size){
	for(int i = 0; i < size; i++){
		a[i] = rand() % 100;
//		cout << arr[i] << "\n";
	}
	cout << endl << endl;
}

int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	srand (time(NULL));
	cout << "тема: ДЗ-11" << endl;
	cout << "дата: 26.06.2019" << endl;
	cout << "автор: Юсупов Т." << endl;
	cout << "\n\n" << endl;
	
	cout << "Создал функцию doMagic(), которая сортирует от самого быстрого алгоритма, " << endl
		<< "до самого медленного." << endl
		<< "Так же создал алгоритм сортировки yakerSort() на основе shakerSort(). " << endl
		<<"yakerSort() работает быстрее :)" << endl;
	const int size = 10000;
	int arr[size];
	
	
	
	
	randArrey(arr, size);
	// 1) selectSort
	auto start_1 = chrono::high_resolution_clock::now();
	insertSort(arr,size);
	auto end_1 = chrono::high_resolution_clock::now();
	chrono::duration<float> duration_1 = end_1 - start_1;
//	cout <<"Duration of selectSort\t= " << duration_1.count() << " s." << endl;
	// selectSort
	
	
	randArrey(arr, size);	
	// 2) bubbleSort
	auto start_2 = chrono::high_resolution_clock::now();
	bubbleSort(arr,size);
	auto end_2 = chrono::high_resolution_clock::now();
	chrono::duration<float> duration_2 = end_2 - start_2;
//	cout <<"Duration of bubbleSort\t= " << duration_2.count() << " s." << endl;
	// bubbleSort
	
	
	randArrey(arr, size);	
	// 3) yakerSort
	auto start_3 = chrono::high_resolution_clock::now();
	yakerSort(arr,size);
	auto end_3 = chrono::high_resolution_clock::now();
	chrono::duration<float> duration_3 = end_3 - start_3;
//	cout <<"Duration of YshakerSort\t= " << duration_3.count() << " s." << endl;
	// yakerSort
		
	
	
	randArrey(arr, size);
	// 4) shakerSort
	auto start_4 = chrono::high_resolution_clock::now();
	shakerSort(arr,size);
	auto end_4 = chrono::high_resolution_clock::now();
	chrono::duration<float> duration_4 = end_4 - start_4;
//	cout <<"Duration of shakerSort\t= " << duration_4.count() << " s." << endl;
	// shakerSort
	
	
	randArrey(arr, size);	
	// 5) insertSort
	auto start_5 = chrono::high_resolution_clock::now();
	insertSort(arr,size);
	auto end_5 = chrono::high_resolution_clock::now();
	chrono::duration<float> duration_5 = end_5 - start_5;
//	cout <<"Duration of insertSort \t= " << duration_5.count() << " s." << endl;
	// insertSort
	
	
	
	float topArrey[5] = {duration_1.count(), duration_2.count(), duration_3.count(), duration_4.count(), duration_5.count()};
	doMagic(topArrey, 5);
	cout << endl << endl;
	
	
	
	
	
	
	
	
	
	return 0;
}




