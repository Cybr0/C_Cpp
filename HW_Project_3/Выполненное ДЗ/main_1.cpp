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
	cout << "milles to meters.\n";
	cout << "����: ���������� � ���� ������; ��-3.\n";
	cout << "����: 21.05.2019." <<endl;
	cout << "�����: ������ �����.";
	cout << "\n\n\n";
	
	
	float mille;    
	float meter = 1609.344;
	
	cout << "��������� ��� �������� ���� � �����.\n";
	cout << "������� �������� � �����: ";
	cin >> mille;
	
	
	cout << endl;
	cout << "�����: "
			<< mille 
			<< " ���. = " 
			<< mille*meter
 			<<" ����.\n\n";


	return 0;
}
