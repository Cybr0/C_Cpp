#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	cout << "����: else if" << endl;
	cout << "�����: ������ �." << endl;
	cout << "����: 04.06.2019" << endl;
	cout << endl << endl << endl;
	
	cout << endl 
	<< "\t\t����� ���������� ������������.\n" 
	<<" � ���������, ������� ���������� - ����� �� ��������� ������.\n\n\n";

	
	cout << " ������� 1-��  �������� � ��/�. \n"
			<< " ������� ��������� - ";
	double a_1;	
	cin >> a_1;
	
	
	cout << " ������� ���� - ";
	double a_2;
	cin >> a_2;
	
	
	cout << " �� ����� " 
			<< a_1
			<< "��/"
			<< a_2
			<< "�.";
			
			
			
	
	cout << "\n\n\n\n ������� 2-�� �������� � �/�. \n"
			<< " ������� ����� - ";
	double b_1;	
	cin >> b_1;
	
	
	cout << " ������� ������� - ";
	double b_2;
	cin >> b_2;
	
	
	cout << " �� ����� " 
			<< b_1
			<< "�/"
			<< b_2
			<< "�.\n\n\n\n";
	


	double c_1 = a_1 * 1000;
	double c_2 = a_2 * 3600;
	
	
	if ((c_1 / c_2) == (b_1 / b_2)) {
		
		cout << " �����: " << a_1 << "��/" <<a_2 << "� � " << b_1 << "�/" << b_2 << "c �����.\n\n\n";
		
		}
	
	else {
		
		if ((c_1 / c_2) > (b_1 / b_2))	{
			
			cout << " �����: " << a_1 << "��/" <<a_2 << "� ������, ��� " << b_1 << "�/" << b_2 << "c.\n\n\n";
		
			}
		
		else {
			
			cout << " �����: " << b_1 << "�/" <<b_2 << "� ������, ��� " << a_1 << "��/" << a_2 << "�.\n\n\n";
			
			}
		
		
	}		
	
	return 0;
}
