/* 
���������� � ���� ������; ��-4
25.05.2019
������ �����

*/
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	cout << "three_digit_number.\n";
	cout << "����: ���������� � ���� ������; ��-4.\n";
	cout << "����: 25.05.2019." <<endl;
	cout << "�����: ������ �����.";
	cout << "\n";
	
	while (true) {
		cout << "\n\n\n������� ���� ������� �����: ";
		int three_digit_number;
		cin >> three_digit_number;
	
		int first_digit = three_digit_number / 100;
		int second_digit = (three_digit_number % 100)/10;
		int third_digit = (three_digit_number % 100)%10;
	
		cout << "\n������ �����: " << first_digit << endl
				<< "������ �����: " << second_digit << endl
				<< "������ �����: " << third_digit << endl;
			
		int sum_of_numbers = first_digit + second_digit + third_digit;
		cout << "\n����� �����: " << sum_of_numbers << endl;
	
		int product_of_numbers = first_digit * second_digit * third_digit;
		cout << "������������: " << product_of_numbers << endl;
	
		double average = sum_of_numbers / 3.0;
		cout << "������� ��������������: " << average << endl;	
	}
	
	
	
	return 0;
}
