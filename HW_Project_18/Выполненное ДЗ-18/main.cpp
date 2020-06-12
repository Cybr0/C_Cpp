/* 
Юсупов Т.
28.06.2019
Битовые операции дз-18
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
	cout << "Введите время." << endl
		<< "Введите часы: ";
		cin >> H;
	if(H>=24 || H <0){
		cout<< "\nВы ввели не правильный формат времени. Ошибка\n\n" << endl;
		return 0;
	}
		
		(*temp).H = H;
	
	cout << "\nВведите минуты: ";
		cin >> M;	
	if(M>=60 || M <0){
		cout<< "\nВы ввели не правильный формат времени. Ошибка\n\n" << endl;
		return 0;
	}
		(*temp).M = M;
	cout << "\nВведите секунды: ";
		cin >> S;	
	if(S>=60 || S <0){
		cout<< "\nВы ввели не правильный формат времени. Ошибка\n\n" << endl;
		return 0;
	}
		(*temp).S = S;
	cout << "\nВведите милисекунды: ";
		cin >> MS;
	if(MS>=1000 || MS <0){
		cout<< "\nВы ввели не правильный формат времени. Ошибка\n\n" << endl;
		return 0;
	}
		(*temp).MS = MS;	
		
//	return temp;
}



void PrintBitTime(Time temp)
{
	cout << "\n\nВРЕМЯ: " << temp.H << "ч. "
		<< temp.M << "мин. "
		<< temp.S << "сек. "
		<< temp.MS << "мс. ";
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	cout << "тема: ДЗ-18" << endl;
	cout << "дата: 20.07.2019" << endl;
	cout << "автор: Юсупов Т." << endl;
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
