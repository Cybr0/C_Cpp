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
	cout << "three_digit_number.\n";
	cout << "тема: Переменные и типы данных; дз-4.\n";
	cout << "дата: 25.05.2019." <<endl;
	cout << "автор: Юсупов Тимур.";
	cout << "\n";
	
	while (true) {
		cout << "\n\n\nВведите трех значное число: ";
		int three_digit_number;
		cin >> three_digit_number;
	
		int first_digit = three_digit_number / 100;
		int second_digit = (three_digit_number % 100)/10;
		int third_digit = (three_digit_number % 100)%10;
	
		cout << "\nПервое число: " << first_digit << endl
				<< "Второе число: " << second_digit << endl
				<< "Третье число: " << third_digit << endl;
			
		int sum_of_numbers = first_digit + second_digit + third_digit;
		cout << "\nСумма чисел: " << sum_of_numbers << endl;
	
		int product_of_numbers = first_digit * second_digit * third_digit;
		cout << "Произведение: " << product_of_numbers << endl;
	
		double average = sum_of_numbers / 3.0;
		cout << "Среднее арифметическое: " << average << endl;	
	}
	
	
	
	return 0;
}
