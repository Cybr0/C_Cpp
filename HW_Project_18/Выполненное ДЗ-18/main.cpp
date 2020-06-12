/* 
������ �.
28.06.2019
������� �������� ��-18
*/

#include <iostream>
#include <stdlib.h>
#include <time.h> 
//#include <string>
#include <bitset>

using namespace std;

union test {
	int i;
	char c;
	double b;
};

struct Time {
	int H :6;	
	int M :7;
	int S :7;
	int MS :11;
	
};

struct compareTime {
	int H;	
	int M;
	int S;
	int MS;
	
};



int SetInBitTime(Time *temp)
{
	
	int H, M, S, MS;
	cout << "������� �����." << endl
		<< "������� ����: ";
		cin >> H;
	if(H>=24 || H <0){
		cout<< "\n�� ����� �� ���������� ������ �������. ������\n\n" << endl;
		return 0;
	}
		
		(*temp).H = H;
	
	cout << "\n������� ������: ";
		cin >> M;	
	if(M>=60 || M <0){
		cout<< "\n�� ����� �� ���������� ������ �������. ������\n\n" << endl;
		return 0;
	}
		(*temp).M = M;
	cout << "\n������� �������: ";
		cin >> S;	
	if(S>=60 || S <0){
		cout<< "\n�� ����� �� ���������� ������ �������. ������\n\n" << endl;
		return 0;
	}
		(*temp).S = S;
	cout << "\n������� �����������: ";
		cin >> MS;
	if(MS>=1000 || MS <0){
		cout<< "\n�� ����� �� ���������� ������ �������. ������\n\n" << endl;
		return 0;
	}
		(*temp).MS = MS;	
		
//	return temp;
}



void PrintBitTime(Time temp)
{
	cout << "\n\n�����: " << temp.H << "�. "
		<< temp.M << "���. "
		<< temp.S << "���. "
		<< temp.MS << "��. ";
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	cout << "����: ��-18" << endl;
	cout << "����: 20.07.2019" << endl;
	cout << "�����: ������ �." << endl;
	cout << "\n\n" << endl;
	
	Time temp;
	struct Time *t = &temp;	
	
	SetInBitTime(t);
	PrintBitTime(temp);
		
//	cout << "H:" << temp.H << endl
//		 << "M:" << temp.M << endl
//		 << "S:" << temp.S << endl
//		 << "MS:" << temp.MS << endl;
	compareTime compareTemp;
	
	cout << "\n\nsizeof(temp) =\t" << sizeof(temp) << endl;
	cout << "sizeof(compareTemp) =\t" << sizeof(compareTemp) << endl;
	return 0;
}
