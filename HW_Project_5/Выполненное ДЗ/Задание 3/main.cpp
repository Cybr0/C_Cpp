/* 
���������� � ���� ������; ��-4
25.05.2019
������ �����

*/
#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	cout << "fractional_number.\n";
	cout << "����: ���������� � ���� ������; ��-4.\n";
	cout << "����: 25.05.2019." <<endl;
	cout << "�����: ������ �����.";
	cout << "\n";
	
	/*
	//��� ������ � �������� modf
	
	cout << "������� ������� �����: ";
	double val
			,fractpart  // ������� �����
			,intpart;   // ����� �����
	
	
	cin >> val;
	
	fractpart = modf(val , &intpart);  // ��������� ������� ����� �� �����
	
	cout << "����� ����: " << intpart << endl
			<< "������� �����: " << fractpart << endl;
	
	*/
	while (true){
		cout << "\n\n\n\n\n������� ����� ������� �����: ";
		float input_number;
		cin >> input_number;
	
		int whole_part = input_number;  //��������� ����� ����
		cout <<"\n����� ����: " << whole_part<<endl;
	
		float decimal_part = input_number - whole_part; // ��������� ������� ����
		cout <<"������� ����: " << decimal_part;	
	}
	
	
	
	return 0;
}
