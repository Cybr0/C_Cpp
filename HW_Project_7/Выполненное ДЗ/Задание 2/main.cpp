/*
������� � ����� ��-7
05.06.02019
������ �����

 */
#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale (LC_ALL, "RUS");
	cout << "����: ����� � �������" << endl;
	cout << "�����: ������ �." << endl;
	cout << "����: 04.06.2019" << endl;
	cout << endl << endl;
	
	const int SIZE = 8;;
	
	int arr_a[SIZE] {1,2,3,4,5,6,7,8};
	int arr_b[SIZE] {8,7,6,5,4,3,2,5};
	int arr_c[SIZE];
	
	cout << "�� ����� �������� 'a' � 'b' ������ ������ 'c'.\n"
			<< "��������� ����������� ����." << endl << endl; 
	
	for (int i = 0; i < SIZE; i++){
		
		arr_c[i] = arr_a[i] + arr_b[i];
		
	}
	
	
	for (int i = 0; i < SIZE; i++){
		
		cout << "3-�� ������, ������� [" << i << "]  = "<< arr_c[i] << endl;
		
	}
	
	
	
	return 0;
}
