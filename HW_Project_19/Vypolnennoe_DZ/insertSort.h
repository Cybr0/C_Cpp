#ifndef INSERTSORT_H
#define INSERTSORT_H

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


#endif
