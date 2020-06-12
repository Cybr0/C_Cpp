#ifndef BUBBLESORT_H
#define BUBBLESORT_H

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
#endif
