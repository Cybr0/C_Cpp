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
	cout << "mm to foot.\n";
	cout << "тема: Переменные и типы данных; дз-3.\n";
	cout << "дата: 21.05.2019." <<endl;
	cout << "автор: Юсупов Тимур.";
	cout << "\n\n\n";
	
	
	float mm;
	float foot = 304.8;
	
	cout << "Программа для перевода мм. в футы.\n";
	cout << "Введите значение в миллиметрах: ";
	cin >> mm;
	
	
	cout << endl;
	cout << "Ответ: "
			<< mm 
			<< " мм. = " 
			<< mm/foot
 			<<" фут.\n\n";


	return 0;
}
