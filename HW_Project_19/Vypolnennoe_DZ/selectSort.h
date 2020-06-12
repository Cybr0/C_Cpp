#ifndef SELECTSORT_H
#define SELECTSORT_H

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


#endif
