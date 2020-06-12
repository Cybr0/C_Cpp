#include <iostream>
#include <cmath>

using namespace std;
/*
Функции ДЗ-8
12.06.02019
Юсупов Тимур

 */
 
 double foo(double a){
 	return a = pow(a,3);
 }
 
int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	cout << "дата: 12.06.2019" <<endl;
	cout << "тема: function" <<endl;
	cout << "автор: Юсупов" <<endl;
	cout << "\n\n" <<endl;
	
	
	double a;
	
	cout << "Это программа возводит введенное вами число в куб." << endl
		<< "Введите число: ";
		
	cin >> a;
	
	cout << ""<<a<<" = " << foo(a);
	
	return 0;
}
