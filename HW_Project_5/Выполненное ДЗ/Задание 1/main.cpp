#include <iostream>

/*
���������� � ���� ������ ��-5
28.05.02019
������ �����

 */
using namespace std;
int main(int argc, char** argv) {
	setlocale (LC_ALL, "Rus");
	cout << "����: ���������� � ���� ������\n";
	cout << "callCost\n";
	cout << "����: 28.05.2019\n";
	cout << "�����: ������ �����\n";
	cout << "\n";	
	
	
// ������ ���������
	
	while (true) {
		cout << "\n\n��� ������� ��������� ����������� ���������\n"
			<< "������� ����� ������ ���. ���������:\n"
			<<"������� ����: ";
		
		int start_hour;
		cin >> start_hour;
			if (start_hour > 24){
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n��������� ���� ����� ( "
						<< start_hour
				 		<< " ) ������� �� ���������.\n "						
						<< "�� ��������� ���. ��������.\n"
						<< "����. ��������: ���� - 24, ������ � ������� - 59.\n\n\n\n\n\n\n\n\n\n\n\n ";
			return 0;
			}
		
		cout	<<"������� ������: ";
		int start_minutes;
		cin >> start_minutes;
			if (start_minutes > 59){
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n��������� ���� ����� ( "
						<< start_minutes
				 		<< " ) ������� �� ���������.\n "						 
						<< "�� ��������� ���. ��������.\n"
						<< "����. ��������: ���� - 24, ������ � ������� - 59.\n\n\n\n\n\n\n\n\n\n\n\n ";
			return 0;
		}
		
		cout	<<"������� �������: ";
		int start_seconds;
		cin >> start_seconds;
			if (start_seconds > 59){
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n��������� ���� ����� ( "
						<< start_seconds
				 		<< " ) ������� �� ���������.\n "						
						<< "�� ��������� ���. ��������.\n"
						<< "����. ��������: ���� - 24, ������ � ������� - 59.\n\n\n\n\n\n\n\n\n\n\n\n ";
			return 0;
		}
	
	
	
// ����� ���������	
	
		cout << "\n\n� ������ ������� ����� ���. ���������:\n"
				<< "������� ����: ";
		int end_hour;
		cin >> end_hour;
			if (end_hour > 24){
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n��������� ���� ����� ( "
						<< end_hour
				 		<< " ) ������� �� ���������.\n "						 
						<< "�� ��������� ���. ��������.\n"
						<< "����. ��������: ���� - 24, ������ � ������� - 59.\n\n\n\n\n\n\n\n\n\n\n\n ";
			return 0;
		}
		
		cout	<<"������� ������: ";
		int end_minutes;
		cin >> end_minutes;
			if (end_minutes > 59){
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n��������� ���� ����� ( "
						<< end_minutes
				 		<< " ) ������� �� ���������.\n "						 
						<< "�� ��������� ���. ��������.\n"
						<< "����. ��������: ���� - 24, ������ � ������� - 59.\n\n\n\n\n\n\n\n\n\n\n\n ";
			return 0;
		}
		
		cout	<<"������� �������: ";
		int end_seconds;
		cin >> end_seconds;
			if (end_seconds > 59){
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n��������� ���� ����� ( "
						<< end_seconds
				 		<< " ) ������� �� ���������.\n "						
						<< "�� ��������� ���. ��������.\n"
						<< "����. ��������: ���� - 24, ������ � ������� - 59.\n\n\n\n\n\n\n\n\n\n\n\n ";
			return 0;
		}
	
	
	
// ��� ������� ������ 	
		int total_start_seconds = (start_hour * 3600) + (start_minutes * 60) + start_seconds; 
		int total_end_seconds = (end_hour * 3600) + (end_minutes * 60) + end_seconds; 
		if (total_end_seconds < total_start_seconds){
			
			
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n    ����� ������ ��������� �� ����� ��������� ����� ����� ���������.\n"
					<< "!!! ��� �� ������ �������, ��� ������������� �� ���. ����� �����?\n"
					<< "    ��������� ������������ �������� ������ � ��������� �����.\n\n\n\n\n\n\n\n\n\n\n\n";	
			return 0;
		}
// ��� CALL COST		
		int call_cost = (total_end_seconds - total_start_seconds) * 0.5;
	
		int call_cost_rubl = call_cost / 100;
		int call_cost_kopeyka = call_cost % 100;
		
		cout << "\n\n��������� ��������� �����������: \n"
				<< call_cost_rubl << " ���.\n"
				<< call_cost_kopeyka << " ���.\n";
				
				
				
		return 0;		
		
	}
	
			
	
	
	return 0;
}
