#include <iostream>
#include <cmath>

using namespace std;
/*
������� ��-8
12.06.02019
������ �����

 */
 
void foo(double a, double b){
 	if (a>b){
 		cout << "����� a = " << a << ", ������� �����.";
	 }
	 else if (a==b){
	 	cout << "����� a = " << a << " � b = " << b << " �����.";
	 } 
	 else {
	 	cout << "����� b = " << b << ", ������� �����.";
	 }
 }
 
int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	cout << "����: 12.06.2019" <<endl;
	cout << "����: function" <<endl;
	cout << "�����: ������" <<endl;
	cout << "\n\n" <<endl;
	
	cout << "������� 2 ����� ����� ��������� ����� �� ��� �������." << endl
		<< "������� a = ";
	double a;	
	cin >> a;
	
	cout << "������� b = ";
	double b;	
	cin >> b;
	
	foo (a,b);
	return 0;
}
