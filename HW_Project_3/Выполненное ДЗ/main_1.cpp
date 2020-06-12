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
	cout << "milles to meters.\n";
	cout << "тема: Переменные и типы данных; дз-3.\n";
	cout << "дата: 21.05.2019." <<endl;
	cout << "автор: Юсупов Тимур.";
	cout << "\n\n\n";
	
	
	float mille;    
	float meter = 1609.344;
	
	cout << "Программа для перевода миль в метры.\n";
	cout << "Введите значение в милях: ";
	cin >> mille;
	
	
	cout << endl;
	cout << "Ответ: "
			<< mille 
			<< " мил. = " 
			<< mille*meter
 			<<" метр.\n\n";


	return 0;
}
