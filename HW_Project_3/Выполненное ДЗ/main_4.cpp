/* 
Переменные и типы данных; дз-3
21.05.2019
Юсупов Тимур

*/
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	cout << "calculate p and s.\n";
	cout << "Тема: Переменные и типы данных; дз-3.\n";
	cout << "Дата: 21.05.2019." <<endl;
	cout << "Автор: Юсупов Тимур.";
	cout << "\n\n\n";
	
	
	float a;
	float b ;
	
	cout << "Введите значения сторон a и b,\nчтобы получить значения площади и периметра прямоугольника. \n\n";
	cout << "Введите значение стороны a: ";
	cin >> a;
	cout << "Введите значение стороны b: ";
	cin >> b;
	
	
	cout << endl;
	cout << "Площадь = "
			<< a*b 
			<< "\nПериметр = " 
			<< (a+b)*2;


	return 0;
}
