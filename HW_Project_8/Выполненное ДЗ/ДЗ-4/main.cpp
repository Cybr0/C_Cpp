#include <iostream>
#include <cmath>

using namespace std;
/*
������� ��-8
12.06.02019
������ �����

 */
 
double foo(double a, double b){
 	double a_1 = a;
 	for (int i = 1; i <b; i++){
 		a*=a_1;
	 }
 	return a;
 }
 
int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	cout << "����: 12.06.2019" <<endl;
	cout << "����: function" <<endl;
	cout << "�����: ������" <<endl;
	cout << "\n\n" <<endl;
	
	double a;
	double b;
	
	cout << "��� ���������, ������� ��������� ��� ���������:" << endl
	<< "��������� ������� � ���������� �������," << endl
	<< "� ��������� ������� ����� �� ������ ���������� ������." << endl << endl;
	
	cout << "������� ��������� �������: ";
	cin >> a;
	
	cout << "������� ���������� �������: ";
	cin >> b;

	cout << "�����: " << a << " � ������� " << b << " ����� " << foo(a,b);
	
	return 0;
}
