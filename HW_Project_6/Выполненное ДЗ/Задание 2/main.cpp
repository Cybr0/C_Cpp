#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	cout << "����: else if" << endl;
	cout << "�����: ������ �." << endl;
	cout << "����: 04.06.2019" << endl;
	cout << endl ;
	
	
	while(true) {
	
	cout << "\n\n��������� ������� ���������� ���������� �����.\n";
	cout << "������� ������������ �����: ";
	
	int lucky_namb;
	char q = q;
	cin >> lucky_namb;
	
	
	if  (lucky_namb == q){
		cout << "�����...";
		return 0;
	}
	
	
	
	
	if ((lucky_namb <= 99999 ) || (lucky_namb >= 1000000)){
		
		
		cout << "\n\n\n�� ����� �� ���������� �����.\n" ;
		cout	<< "��������� � ���, ��� �������� ���� ����� \n";
		cout	<< "� ��������� �� 100000 �� 1000000.\n";
		return 0;	
	}
	
	
	else {
		cout << "��������������, �������� �������� ...\n\n";
	}

	
	
	
	int first_namb = lucky_namb / 100000;
	int second_namb = lucky_namb  / 10000 % 10;
	int therd_namb = lucky_namb  / 1000 % 10;
	int fourth_namb = lucky_namb / 100 % 10;
	int fifth_namb = lucky_namb / 10 % 10;
	int sixth_namb = lucky_namb % 10;
	
	
	
	int first_part = first_namb + second_namb + therd_namb;	
	int second_part = fourth_namb + fifth_namb + sixth_namb;
	
	
	
	if (first_part == second_part) {
		cout << "\n���������� � ��� ���������� �����!!!\n\n";
		cout << "����� ����� �� ��������� ������� \" q\" � ����� 2 \"Enter\".\n\n";
	}
	
	else {
		cout << "\n� ��� ������� �����.\n\n";
		cout << "����� ����� �� ��������� ������� \" q\" � ����� 2 \"Enter\".\n\n";
	}	
	
	}	
	

	
	
	return 0;
}
