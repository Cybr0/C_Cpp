/* 
���������� � ���� ������; ��-3
21.05.2019
������ �����

*/
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	cout << "inch to cm.\n";
	cout << "����: ���������� � ���� ������; ��-3.\n";
	cout << "����: 21.05.2019." <<endl;
	cout << "�����: ������ �����.";
	cout << "\n\n\n";
	
	
	float inch;
	float cm = 2.54;
	
	cout << "��������� ��� �������� ���� � ����������.\n";
	cout << "������� �������� � ������: ";
	cin >> inch;
	
	
	cout << endl;
	cout << "�����: "
			<< inch 
			<< " ����. = " 
			<< inch*cm
 			<<" ��.\n\n";


	return 0;
}
