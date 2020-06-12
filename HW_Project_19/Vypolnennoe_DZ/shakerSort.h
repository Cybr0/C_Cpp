#ifndef SHAKERSORT_H
#define SHAKERSORT_H


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

#endif
