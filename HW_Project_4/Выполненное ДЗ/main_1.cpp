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
	cout << "call_cost.\n";
	cout << "����: ���������� � ���� ������; ��-4.\n";
	cout << "����: 25.05.2019." <<endl;
	cout << "�����: ������ �����.";
	cout << "\n\n\n";
	
	
	int hours_1;
	int minutes_1;
	int seconds_1;
	
	cout << "����� ��������� ��������� ������ ���������.\n"   // ��� ���������� ����� ������ ���������
			<< "������� ����� ������ ���������.\n"
			<< "������� ����: ";
			cin >> hours_1;
			cout << "������� ������: ";
			cin >> minutes_1;
			cout << "������� �������: ";
			cin >> seconds_1;
	
	cout << "\n����. �� ����� - "
			<< hours_1 << " ���. "
			<< minutes_1 << " ���. "
			<< seconds_1 << " ���.\n\n";
	
	int hours_2;
	int minutes_2;
	int seconds_2;
	
	cout << "� ������ ������� ����� ���������� ���������.\n"  // ��� ���������� ����� ����� ���������
			<< "������� ����: ";
			cin >> hours_2;
			cout << "������� ������: ";
			cin >> minutes_2;
			cout << "������� ��������: ";
			cin >> seconds_2; 
	
	cout << "\n����. �� ����� - "
			<< hours_2 << " ���. "
			<< minutes_2 << " ���. "
			<< seconds_2 << " ���.\n\n";
			
	int total_start_seconds = (hours_1 * 3600) + (minutes_1 * 60) + seconds_1;
	int total_end_seconds = (hours_2 * 3600) + (minutes_2 * 60) + seconds_2;
	
	int call_cost = (total_end_seconds - total_start_seconds) * 0.5; // ��� ��������� ��������� � ��������
	
	int call_cost_rubles = call_cost / 100;  // ��� ������� � ����� � �������, ��� ������ ������������ 
	int call_cost_kopeyka = call_cost % 100;
	
	cout << "�� ������ ��������� - "
			<< call_cost_rubles << " ������, " 
			<< call_cost_kopeyka << " ������.\n\n\n";
	
			
			
			
	return 0;
}
