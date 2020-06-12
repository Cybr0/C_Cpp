#include <iostream>
#include <cmath>

using namespace std;
/*
Функции ДЗ-8
12.06.02019
Юсупов Тимур

 */
 
void foo(double a){
	
	bool var;
 	if (a>0){
 		a = true;
 		cout << "Ответ: Ваше число возвращает истину --> " << a;
	 }
	 else if (a==0){
	 	cout << "Ответ: Ваше число равно 0. Ошибка";
	 } 
	 else {
	 	a = false;
	 	cout << "Ответ: Ваше число возвращает ложь --> " << a;
	 }
 }
 
int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	cout << "дата: 12.06.2019" <<endl;
	cout << "тема: function" <<endl;
	cout << "автор: Юсупов" <<endl;
	cout << "\n\n" <<endl;
	
	cout << "Привет, это программа, которая возвращает истину, если" << endl
		<< "передаваемое значение положительное " <<endl
		<< "и ложь, если отрицательное." << endl << endl;
		
	cout << "Введите число: ";
	double a;
	cin >> a;
	foo (a);
	
	return 0;
}
