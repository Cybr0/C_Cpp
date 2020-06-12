/*
------------------------------------------------
Урок 11 - Битовые операции
Упр-2 - Юнион
дата: 10.07.2019г.
выполнил: Раджабов Жамшид
------------------------------------------------
*/

#include <iostream>
#include <stdlib.h>
#include <time.h> 
//#include <string>
//#include <bitset>

using namespace std;

union test {
	int i;
	char c;
	double b;
};

struct Time {
	int H :7;
	int M :7;
	int S :7;
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	cout << "Lesson_17_exp_2 - Unions \n"
		<< "date: 10.07.2019 \n"
		<< "create by: Radjabov_Jamshid" << "\n\n\n";

	srand(time(NULL));
	
	/*test myUnion;
	myUnion.b = 0;
	myUnion.c = 'a';
	cout << myUnion.c << " " << myUnion.i << " " << myUnion.b << endl;*/

	Time temp;
	temp.H = 10;
	temp.M = 30;
	temp.S = 45;

	cout << "size=" << sizeof(temp) << endl;
	cout << "H:" << temp.H << endl
		 << "M:" << temp.M << endl
		 << "S:" << temp.S << endl;


	return 0;
}