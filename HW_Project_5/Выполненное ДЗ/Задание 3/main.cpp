/* 
ѕеременные и типы данных; дз-4
25.05.2019
ёсупов “имур

*/
#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	cout << "fractional_number.\n";
	cout << "тема: ѕеременные и типы данных; дз-4.\n";
	cout << "дата: 25.05.2019." <<endl;
	cout << "автор: ёсупов “имур.";
	cout << "\n";
	
	/*
	//тут способ с функцией modf
	
	cout << "¬ведите дробное число: ";
	double val
			,fractpart  // дробна€ часть
			,intpart;   // чела€ часть
	
	
	cin >> val;
	
	fractpart = modf(val , &intpart);  // отделение дробной части от целой
	
	cout << "цела€ чать: " << intpart << endl
			<< "дробна€ часть: " << fractpart << endl;
	
	*/
	while (true){
		cout << "\n\n\n\n\n¬ведите любое дробное число: ";
		float input_number;
		cin >> input_number;
	
		int whole_part = input_number;  //определ€ю целую чать
		cout <<"\n÷ела€ чать: " << whole_part<<endl;
	
		float decimal_part = input_number - whole_part; // определ€ю дробную чать
		cout <<"ƒробна€ чать: " << decimal_part;	
	}
	
	
	
	return 0;
}
