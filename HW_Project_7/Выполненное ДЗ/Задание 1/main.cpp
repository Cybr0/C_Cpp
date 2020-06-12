#include <iostream>
#include <cmath>

/*
массивы и циклы ƒ«-7
05.06.02019
ёсупов “имур

 */
using namespace std;
int main(int argc, char** argv) {
	setlocale (LC_ALL, "Rus");
	cout << "тема: массивы и циклы ƒ«-5\n";
	cout << "two-dimensional array\n";
	cout << "дата: 05.06.2019\n";
	cout << "автор: ёсупов “имур\n";
	cout << "\n\n\n";
	
	
	
	
	cout << "¬ведите любое целое число: ";
	int var;
	cin >> var;
	int var_2 = var;  //создал дубликат, так как значение потом мен€ютс€
	int count = 0;
	 
	 
	 
	while(var_2 > 0){
		
		
		var_2 = var_2/10;   // тут определ€ю количество цифр
		count +=1;
		
	}
	
//	cout << count << endl;
//	cout << var << endl;

	int count_2 = count;	//создал дубликат, так как значение потом мен€ютс€
		
	int arr[count];		
	
	
	while (count != 0){
		
		int digits = var /   pow (10, count - 1);   // тут € создаю массив
		var -= digits * pow (10, count - 1);
		arr[i] = digits;
		
		count -= 1;
	}
			
		
	
	cout << "\n\n\nј вот массив\n\n";
	
	for (int i = 0; i < count_2; i++) {
		
		cout << "Ёлемент ["<< i <<"] =" << arr[i] << endl << endl;
	}

//cout << pow (10, count - 1);	
	
	
	return 0;
}
