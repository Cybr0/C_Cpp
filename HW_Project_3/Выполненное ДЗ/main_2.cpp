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
	cout << "inch to cm.\n";
	cout << "тема: Переменные и типы данных; дз-3.\n";
	cout << "дата: 21.05.2019." <<endl;
	cout << "автор: Юсупов Тимур.";
	cout << "\n\n\n";
	
	
	float inch;
	float cm = 2.54;
	
	cout << "Программа для перевода дюйм в сантиметры.\n";
	cout << "Введите значение в дюймах: ";
	cin >> inch;
	
	
	cout << endl;
	cout << "Ответ: "
			<< inch 
			<< " дюйм. = " 
			<< inch*cm
 			<<" см.\n\n";


	return 0;
}
