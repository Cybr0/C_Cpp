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
	cout << "mm to foot.\n";
	cout << "����: ���������� � ���� ������; ��-3.\n";
	cout << "����: 21.05.2019." <<endl;
	cout << "�����: ������ �����.";
	cout << "\n\n\n";
	
	
	float mm;
	float foot = 304.8;
	
	cout << "��������� ��� �������� ��. � ����.\n";
	cout << "������� �������� � �����������: ";
	cin >> mm;
	
	
	cout << endl;
	cout << "�����: "
			<< mm 
			<< " ��. = " 
			<< mm/foot
 			<<" ���.\n\n";


	return 0;
}
