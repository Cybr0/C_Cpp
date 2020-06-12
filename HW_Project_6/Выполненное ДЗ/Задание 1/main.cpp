#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	cout << "тема: else if" << endl;
	cout << "автор: Юсупов Т." << endl;
	cout << "дата: 04.06.2019" << endl;
	cout << endl << endl << endl;
	
	cout << endl 
	<< "\t\tДобро пожаловать Пользователь.\n" 
	<<" Я программа, которая определяет - какая из скоростей больше.\n\n\n";

	
	cout << " Введите 1-ую  скорость в км/ч. \n"
			<< " Введите километры - ";
	double a_1;	
	cin >> a_1;
	
	
	cout << " Введите часы - ";
	double a_2;
	cin >> a_2;
	
	
	cout << " Вы ввели " 
			<< a_1
			<< "км/"
			<< a_2
			<< "ч.";
			
			
			
	
	cout << "\n\n\n\n Введите 2-ую скорость в м/с. \n"
			<< " Введите метры - ";
	double b_1;	
	cin >> b_1;
	
	
	cout << " Введите секунды - ";
	double b_2;
	cin >> b_2;
	
	
	cout << " Вы ввели " 
			<< b_1
			<< "м/"
			<< b_2
			<< "с.\n\n\n\n";
	


	double c_1 = a_1 * 1000;
	double c_2 = a_2 * 3600;
	
	
	if ((c_1 / c_2) == (b_1 / b_2)) {
		
		cout << " Ответ: " << a_1 << "км/" <<a_2 << "ч и " << b_1 << "м/" << b_2 << "c равны.\n\n\n";
		
		}
	
	else {
		
		if ((c_1 / c_2) > (b_1 / b_2))	{
			
			cout << " Ответ: " << a_1 << "км/" <<a_2 << "ч больше, чем " << b_1 << "м/" << b_2 << "c.\n\n\n";
		
			}
		
		else {
			
			cout << " Ответ: " << b_1 << "м/" <<b_2 << "с больше, чем " << a_1 << "км/" << a_2 << "ч.\n\n\n";
			
			}
		
		
	}		
	
	return 0;
}
