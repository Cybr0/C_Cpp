#include <iostream>
#include <cmath>

using namespace std;
/*
Функции ДЗ-8
12.06.02019
Юсупов Тимур

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
	cout << "дата: 12.06.2019" <<endl;
	cout << "тема: function" <<endl;
	cout << "автор: Юсупов" <<endl;
	cout << "\n\n" <<endl;
	
	double a;
	double b;
	
	cout << "Это программа, которая принимает два параметра:" << endl
	<< "основание степени и показатель степени," << endl
	<< "и вычисляет степень числа на основе полученных данных." << endl << endl;
	
	cout << "Введите основание степени: ";
	cin >> a;
	
	cout << "Введите показатель степени: ";
	cin >> b;

	cout << "Ответ: " << a << " в степени " << b << " равно " << foo(a,b);
	
	return 0;
}
