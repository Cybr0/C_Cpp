#include <iostream>
#include <cmath>

using namespace std;
/*
������� ��-8
12.06.02019
������ �����

 */
 
void foo(double a){
	
	bool var;
 	if (a>0){
 		a = true;
 		cout << "�����: ���� ����� ���������� ������ --> " << a;
	 }
	 else if (a==0){
	 	cout << "�����: ���� ����� ����� 0. ������";
	 } 
	 else {
	 	a = false;
	 	cout << "�����: ���� ����� ���������� ���� --> " << a;
	 }
 }
 
int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	cout << "����: 12.06.2019" <<endl;
	cout << "����: function" <<endl;
	cout << "�����: ������" <<endl;
	cout << "\n\n" <<endl;
	
	cout << "������, ��� ���������, ������� ���������� ������, ����" << endl
		<< "������������ �������� ������������� " <<endl
		<< "� ����, ���� �������������." << endl << endl;
		
	cout << "������� �����: ";
	double a;
	cin >> a;
	foo (a);
	
	return 0;
}
