#include <iostream>
#include <cmath>

using namespace std;
/*
������� ��-8
12.06.02019
������ �����

 */
 
 double foo(double a){
 	return a = pow(a,3);
 }
 
int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	cout << "����: 12.06.2019" <<endl;
	cout << "����: function" <<endl;
	cout << "�����: ������" <<endl;
	cout << "\n\n" <<endl;
	
	
	double a;
	
	cout << "��� ��������� �������� ��������� ���� ����� � ���." << endl
		<< "������� �����: ";
		
	cin >> a;
	
	cout << ""<<a<<" = " << foo(a);
	
	return 0;
}
