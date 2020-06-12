#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

//int64_t func(int64_t N)
//{
//	if (N == 1 || N == 0) return 1;
//	else return N * func(N - 1);
//}

template <typename T>
void quickSortR(T a[], int B, int E) {
	int i = B, j = E;
	T temp, p;
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

int BinarySearch(int A[], int Lb, int Ub, int Key)
{
	int M;
	while (1) {
		M = (Lb + Ub) / 2;
		if (Key < A[M])
			Ub = M - 1;
		else if (Key > A[M])
			Lb = M + 1;
		else
			return M;

		if (Lb > Ub)
			return -1;
	}
}

int main()
{
	srand(time(NULL));
	const int SIZE = 10;
	int ar[SIZE];

	// до сортировки
	for (int i = 0; i < SIZE; i++) {
		ar[i] = rand() % 100;
		cout << ar[i] << "\t";
	}
	cout << "\n\n";
	quickSortR(ar, 0, SIZE - 1);

	// после сортировки
	for (int i = 0; i < SIZE; i++) {
		cout << ar[i] << "\t";
	}
	cout << "\n\n";
	int val;
	cin >> val;
	cout <<" index = "<< BinarySearch(ar, 0, SIZE - 1, val);

}
