#ifndef QSORT_H
#define QSORT_H
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
#endif




