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
	cout << "calculate p and s.\n";
	cout << "����: ���������� � ���� ������; ��-3.\n";
	cout << "����: 21.05.2019." <<endl;
	cout << "�����: ������ �����.";
	cout << "\n\n\n";
	
	
	float a;
	float b ;
	
	cout << "������� �������� ������ a � b,\n����� �������� �������� ������� � ��������� ��������������. \n\n";
	cout << "������� �������� ������� a: ";
	cin >> a;
	cout << "������� �������� ������� b: ";
	cin >> b;
	
	
	cout << endl;
	cout << "������� = "
			<< a*b 
			<< "\n�������� = " 
			<< (a+b)*2;


	return 0;
}
