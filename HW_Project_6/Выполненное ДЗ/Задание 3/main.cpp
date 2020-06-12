#include <iostream>
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	cout << "тема: else if" << endl;
	cout << "автор: Юсупов Т." << endl;
	cout << "дата: 04.06.2019" << endl;
	cout << endl ;
	
	
	cout << "Введите номер месяца, чтобы узнать к какому времени года он относится. ";
	int month;
	cin >> month;
	
	switch (month) {
		case 12:	
		case 1:	
		case 2:
			cout << "\nЗима";
			break;
		
		case 3:
		case 4:				
		case 5:
			cout << "\nВесна";
			break;	
			
		case 6:
		case 7:		
		case 8:
			cout << "\nЛето";
			break;
			
		case 9:
		case 10:	
		case 11:
			cout << "\nОсень";
			break;
		
		default:
			cout << "\nВы ввели не правильное число.\n"	
				<< "Январь = 1, февраль = 2 и тд.\n";
		
	}
	
	
	
	return 0;
}
