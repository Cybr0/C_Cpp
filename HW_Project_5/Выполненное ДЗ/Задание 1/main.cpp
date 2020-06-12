#include <iostream>

/*
Переменные и типы данных ДЗ-5
28.05.02019
Юсупов Тимур

 */
using namespace std;
int main(int argc, char** argv) {
	setlocale (LC_ALL, "Rus");
	cout << "тема: переменные и типы данных\n";
	cout << "callCost\n";
	cout << "дата: 28.05.2019\n";
	cout << "автор: Юсупов Тимур\n";
	cout << "\n";	
	
	
// НАЧАЛО РАЗГОВОРА
	
	while (true) {
		cout << "\n\nДля расчета стоимости телефонного разговора\n"
			<< "Введите время начала тел. разговора:\n"
			<<"Введите часы: ";
		
		int start_hour;
		cin >> start_hour;
			if (start_hour > 24){
				cout << "\n\n\n\n\n\n\n\n\n\n\n\nУказанное Вами время ( "
						<< start_hour
				 		<< " ) введено не корректно.\n "						
						<< "Вы превысили доп. значение.\n"
						<< "Макс. значения: часы - 24, минуты и секунды - 59.\n\n\n\n\n\n\n\n\n\n\n\n ";
			return 0;
			}
		
		cout	<<"Введите минуты: ";
		int start_minutes;
		cin >> start_minutes;
			if (start_minutes > 59){
				cout << "\n\n\n\n\n\n\n\n\n\n\n\nУказанное Вами время ( "
						<< start_minutes
				 		<< " ) введено не корректно.\n "						 
						<< "Вы превысили доп. значение.\n"
						<< "Макс. значения: часы - 24, минуты и секунды - 59.\n\n\n\n\n\n\n\n\n\n\n\n ";
			return 0;
		}
		
		cout	<<"Введите секунды: ";
		int start_seconds;
		cin >> start_seconds;
			if (start_seconds > 59){
				cout << "\n\n\n\n\n\n\n\n\n\n\n\nУказанное Вами время ( "
						<< start_seconds
				 		<< " ) введено не корректно.\n "						
						<< "Вы превысили доп. значение.\n"
						<< "Макс. значения: часы - 24, минуты и секунды - 59.\n\n\n\n\n\n\n\n\n\n\n\n ";
			return 0;
		}
	
	
	
// КОНЕЦ РАЗГОВОРА	
	
		cout << "\n\nА теперь введите конец тел. разговора:\n"
				<< "Введите часы: ";
		int end_hour;
		cin >> end_hour;
			if (end_hour > 24){
				cout << "\n\n\n\n\n\n\n\n\n\n\n\nУказанное Вами время ( "
						<< end_hour
				 		<< " ) введено не корректно.\n "						 
						<< "Вы превысили доп. значение.\n"
						<< "Макс. значения: часы - 24, минуты и секунды - 59.\n\n\n\n\n\n\n\n\n\n\n\n ";
			return 0;
		}
		
		cout	<<"Введите минуты: ";
		int end_minutes;
		cin >> end_minutes;
			if (end_minutes > 59){
				cout << "\n\n\n\n\n\n\n\n\n\n\n\nУказанное Вами время ( "
						<< end_minutes
				 		<< " ) введено не корректно.\n "						 
						<< "Вы превысили доп. значение.\n"
						<< "Макс. значения: часы - 24, минуты и секунды - 59.\n\n\n\n\n\n\n\n\n\n\n\n ";
			return 0;
		}
		
		cout	<<"Введите секунды: ";
		int end_seconds;
		cin >> end_seconds;
			if (end_seconds > 59){
				cout << "\n\n\n\n\n\n\n\n\n\n\n\nУказанное Вами время ( "
						<< end_seconds
				 		<< " ) введено не корректно.\n "						
						<< "Вы превысили доп. значение.\n"
						<< "Макс. значения: часы - 24, минуты и секунды - 59.\n\n\n\n\n\n\n\n\n\n\n\n ";
			return 0;
		}
	
	
	
// ТУТ ПОДСЧЕТ СЕКУНД 	
		int total_start_seconds = (start_hour * 3600) + (start_minutes * 60) + start_seconds; 
		int total_end_seconds = (end_hour * 3600) + (end_minutes * 60) + end_seconds; 
		if (total_end_seconds < total_start_seconds){
			
			
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n    Время начала разговора не может превышать время конца разговора.\n"
					<< "!!! Или Вы хотите сказать, что разговаривали по тел. более суток?\n"
					<< "    Проверьте правильность введеных данных и повторите позже.\n\n\n\n\n\n\n\n\n\n\n\n";	
			return 0;
		}
// ТУТ CALL COST		
		int call_cost = (total_end_seconds - total_start_seconds) * 0.5;
	
		int call_cost_rubl = call_cost / 100;
		int call_cost_kopeyka = call_cost % 100;
		
		cout << "\n\nСтоимость разговора составляеет: \n"
				<< call_cost_rubl << " руб.\n"
				<< call_cost_kopeyka << " коп.\n";
				
				
				
		return 0;		
		
	}
	
			
	
	
	return 0;
}
