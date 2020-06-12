/*
------------------------------------------------
Урок 11 - Битовые операции
Упр-1 - Битовый операции
дата: 10.07.2019г.
выполнил: Раджабов Жамшид
------------------------------------------------
*/

#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include <string>
#include <bitset>

using namespace std;


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	cout << "Lesson_17_exp_1 - Bite operations \n"
		<< "date: 10.07.2019 \n"
		<< "create by: Radjabov_Jamshid" << "\n\n\n";

	srand(time(NULL));
	int a = 45;
	int b = 10;
	int c = a << 2;
	bitset<8> bs_a(a);
	bitset<8> bs_b(b);
	bitset<8> bs_c(c);
	bitset<8> bs_ab(a&b);
	bitset<8> bs_ab1(a | b);
	
	cout << "a= " << a << "; bin= " << bs_a.to_string() << endl;
	cout << "b=  "<< b << "; bin= " << bs_b.to_string() << endl;
	cout << "c= " << c << "; bin= " << bs_c.to_string() << endl;
	cout << "a&b= " << (a & b) << ";\tbin= " << bs_ab.to_string() << endl;
	cout << "a|b= " << (a | b) << ";\tbin= " << bs_ab1.to_string() << endl;
	

	return 0;
}