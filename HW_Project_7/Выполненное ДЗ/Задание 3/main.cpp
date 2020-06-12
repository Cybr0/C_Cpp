#include <iostream>
#include <ctime>

/*
массивы и циклы ДЗ-7
05.06.02019
Юсупов Тимур

 */
using namespace std;
int main(int argc, char** argv) {
	setlocale (LC_ALL, "Rus");
	srand (time(NULL));
	cout << "тема: массивы и циклы ДЗ-5\n";
	cout << "two-dimensional array\n";
	cout << "дата: 05.06.2019\n";
	cout << "автор: Юсупов Тимур\n";
	cout << "\n\n\n";
	
	cout << "Добрый день! Я задача №3." << endl
			<<"Мое задание посчитать разные штуки в двумерномом массиве." << endl << endl;
	int str = 2;
	int col = 3;
	
	
	cout << "Вы хотите создать массив сами? " << endl;
	cout << "Для ответа 'Да' нажмите = 1, а для ответа 'Нет' нажмите = 0" << endl;
	
	int button_1;
	cin >> button_1;
	
	int arr[str][col]
		{
		{1,2,3},
		{3,2,1}
		};
	  
	  
	if (button_1 == 1) {
	
		cout << "Введите количество строк в массиве: ";
		cin >> str;
	
		cout << "\nВведите количество столбцов в массиве: ";
		cin >> col;
		
		
		
		cout << "\n\nМассив ["<<str<<"]["<<col<<"] создан." << endl
				<< "Желаете его заполнить сами? " << endl
				<< "Для ответа 'да' нажмите = 1, а для ответа 'нет' нажмите = 0" << endl;
		
		cin >> button_1;	
		
		if (button_1 == 1) {
			
				cout << "\nЗаполните массив элементами. Присвойте им значения." << endl;
	
				for (int i = 0; i < str; i++){
		
				cout << "Заполните "<< i <<" строку:\n";
		
				for (int j = 0; j < col; j++){
			
					cout << "столбец "<< j <<" = ";
					cin >> arr[i][j];
				
					}
				cout << endl;
				}
	
				
		}
		
		else if (button_1 == 0){
			cout << "\nМассив заполнен автоматически." << endl;
			for (int i = 0; i < str; i++){
		
				for (int j = 0; j < col; j++){
			
					arr[i][j] = rand() % 10;
				
					}
				}
			
		}
		else {
			cout << "\nВы ввели не корректный ответ." << endl;
		return 0;
		}
	}
	
	else if (button_1 == 0) {
		cout << "\n\nМассив [2][3] создан автоматически." << endl << endl;
		
	}
	
	else {
		cout << "\nВы ввели не корректный ответ." << endl;
		return 0;
	}
	
	
	

	
	cout << "\n\nВаш массив получился таким: \n\n";
	
	for (int i = 0; i < str; i++){
		
		
		for (int j = 0; j < col; j++){
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	
//	cout << sum << endl;
	
	int sum = 0;
	
	for (int i = 0; i < str; i++){
		for (int j = 0; j < col; j++){
			sum += arr[i][j];
		}
	}
	
//	cout << "\n\n\nСумма всех элементов массива = "<< sum << endl;
	
	double average = (double)sum / (str * col);
//	cout << "Cреднее арифметическое всех элементов массива = " << average << endl;


	int min = arr[0][0];
	for (int i = 0; i < str; i++){
		for (int j = 1; j < col; j++){
			if(min > arr[i][j]){
				min = arr[i][j];
			}
		}
	}
//	cout << "Минимальный элемент массива = " << min << endl;
	
	
	
	
	int max = arr[0][0];
	for (int i = 0; i < str; i++){
		for (int j = 1; j < col; j++){
			if(max < arr[i][j]){
				max = arr[i][j];
			}
		}
	}
//	cout << "Максимальный элемент массива = " << max << endl;







	cout << "\n\n\nТак, пришло время посчитать разные штуки в этом массиве. Чтобы посчитать...\n" << endl
			<< "__________________________________________" << endl
			<< "Сумму всех элементов массива, нажми   - 1." << endl
			<< "__________________________________________" << endl
			<< "Сред. ариф. всех элементов, нажми     - 2." << endl
			<< "__________________________________________" << endl
			<< "Минимальный элемент массива, нажми    - 3." << endl
			<< "__________________________________________" << endl
			<< "Максимальный элемент массива, нажми   - 4." << endl
			<< "__________________________________________" << endl
			<< "Чтобы посчитать все сразу, нажми      - 0." << endl
			<< "__________________________________________" << endl;
			
			
	cin >> button_1;
	switch (button_1){
		case 0:
			cout << "\nСумма всех элементов массива = "<< sum << endl;
			cout << "Cреднее арифметическое всех элементов массива = " << average << endl;
			cout << "Минимальный элемент массива = " << min << endl;
			cout << "Максимальный элемент массива = " << max << endl;
			break;
		case 1:
			cout << "\nСумма всех элементов массива = "<< sum << endl;
			break;
		
		case 2:
			cout << "\nCреднее арифметическое всех элементов массива = " << average << endl;
			break;
		
		case 3:
			cout << "\nМинимальный элемент массива = " << min << endl;
			break;
		
		case 4:
			cout << "\nМаксимальный элемент массива = " << max << endl;
			break;
		
		default:
			cout << "\nВы ввели не корректное значение " << endl;
			return 0;	
	}
	

	
	return 0;
}
