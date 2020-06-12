/* 
Переменные и типы данных; дз-4
25.05.2019
Юсупов Тимур

*/
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	cout << "call_cost.\n";
	cout << "тема: Переменные и типы данных; дз-4.\n";
	cout << "дата: 25.05.2019." <<endl;
	cout << "автор: Юсупов Тимур.";
	cout << "\n\n\n";
	
	
	int hours_1;
	int minutes_1;
	int seconds_1;
	
	cout << "Чтобы посчитать стоимость вашего разговора.\n"   // тут определяем время начала разговора
			<< "Введите время начала разговора.\n"
			<< "Введите часы: ";
			cin >> hours_1;
			cout << "Введите минуты: ";
			cin >> minutes_1;
			cout << "Введите секунды: ";
			cin >> seconds_1;
	
	cout << "\nОкей. Вы ввели - "
			<< hours_1 << " час. "
			<< minutes_1 << " мин. "
			<< seconds_1 << " сек.\n\n";
	
	int hours_2;
	int minutes_2;
	int seconds_2;
	
	cout << "А теперь введите время завершения разговора.\n"  // тут определяем время конца разговора
			<< "Введите часы: ";
			cin >> hours_2;
			cout << "Введите минуты: ";
			cin >> minutes_2;
			cout << "Введите секурнды: ";
			cin >> seconds_2; 
	
	cout << "\nОкей. Вы ввели - "
			<< hours_2 << " час. "
			<< minutes_2 << " мин. "
			<< seconds_2 << " сек.\n\n";
			
	int total_start_seconds = (hours_1 * 3600) + (minutes_1 * 60) + seconds_1;
	int total_end_seconds = (hours_2 * 3600) + (minutes_2 * 60) + seconds_2;
	
	int call_cost = (total_end_seconds - total_start_seconds) * 0.5; // тут определяю стоимость в копейках
	
	int call_cost_rubles = call_cost / 100;  // тут перевел в рубли и копейки, для лучшей визуализации 
	int call_cost_kopeyka = call_cost % 100;
	
	cout << "Вы должны заплатить - "
			<< call_cost_rubles << " рублей, " 
			<< call_cost_kopeyka << " копеек.\n\n\n";
	
			
			
			
	return 0;
}
