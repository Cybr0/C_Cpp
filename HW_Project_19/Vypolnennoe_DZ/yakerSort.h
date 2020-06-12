#ifndef YASORT_H
#define YASORT_H

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

#endif
