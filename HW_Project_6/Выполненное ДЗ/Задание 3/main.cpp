#include <iostream>
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	cout << "����: else if" << endl;
	cout << "�����: ������ �." << endl;
	cout << "����: 04.06.2019" << endl;
	cout << endl ;
	
	
	cout << "������� ����� ������, ����� ������ � ������ ������� ���� �� ���������. ";
	int month;
	cin >> month;
	
	switch (month) {
		case 12:	
		case 1:	
		case 2:
			cout << "\n����";
			break;
		
		case 3:
		case 4:				
		case 5:
			cout << "\n�����";
			break;	
			
		case 6:
		case 7:		
		case 8:
			cout << "\n����";
			break;
			
		case 9:
		case 10:	
		case 11:
			cout << "\n�����";
			break;
		
		default:
			cout << "\n�� ����� �� ���������� �����.\n"	
				<< "������ = 1, ������� = 2 � ��.\n";
		
	}
	
	
	
	return 0;
}
