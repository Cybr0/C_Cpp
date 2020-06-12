/* 
Юсупов Т.
28.06.2019
Алгоритмы, оценка скорости алгоритмов
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <chrono>
using namespace std; 



/////////////// ранд

void randArrey(int a[], int size){
	for(int i = 0; i < size; i++){
		a[i] = rand() % 100;
//		cout << arr[i] << "\n";
	}
//	cout << endl << endl;
}


/////////////// сортировки

void quickSortR(int a[], int B, int E) {
	int i = B, j = E;
	int temp, p;
	p = a[(B + E) / 2];
	do {
		while (a[i] < p) i++;
		while (a[j] > p) j--;
		if (i <= j) {
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);
	if (B < j)quickSortR(a, B, j);
	if (i < E)quickSortR(a, i, E);
}



void insertSort(int a[], int size){
	int x;
	int i, j;
	for (i = 0; i < size; i++){
		x = a[i];
		
		for (j = i-1; j >= 0 && a[j] > x; j--){
			a[j+1] = a[j];
		}
		a[j+1] = x;
	}
}



void yakerSort(int a[], int size){
	int k = size - 1;
	int lb = 1, ub = size - 1;
	int x;
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



void shakerSort(int a[], int size){
	int k = size-1;
	int lb=1, ub = size-1;
	int x;
	
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



void bubbleSort(int a[], int size){
	int x;
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



void selectSort(int a[], int size) {
	int k;
	int x;
	
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
//сортировки /////////////


/////////////// сортировка сортировок
template<typename T>
void doMagic(T a[], int size = 5) {
	int k;
	T x;
	float like[5] = {1, 2, 3, 4, 5};
	float boo;
	
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


