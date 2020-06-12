#include <iostream>
#include <cmath>

using namespace std;
/*
‘ункции ƒ«-8
12.06.02019
ёсупов “имур

 */
 
void foo(double a, double b){
 	if (a>b){
 		cout << "ќтвет a = " << a << ", большее число.";
	 }
	 else if (a==b){
	 	cout << "ќтвет a = " << a << " и b = " << b << " равны.";
	 } 
	 else {
	 	cout << "ќтвет b = " << b << ", большее число.";
	 }
 }
 
int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	cout << "дата: 12.06.2019" <<endl;
	cout << "тема: function" <<endl;
	cout << "автор: ёсупов" <<endl;
	cout << "\n\n" <<endl;
	
	cout << "¬ведите 2 числа чтобы проверить какое из них большее." << endl
		<< "¬ведите a = ";
	double a;	
	cin >> a;
	
	cout << "¬ведите b = ";
	double b;	
	cin >> b;
	
	foo (a,b);
	return 0;
}
