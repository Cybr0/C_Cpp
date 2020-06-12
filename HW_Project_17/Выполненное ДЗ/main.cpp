/* 
ДЗ-17
14.07.2019
Юсупов
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <Windows.h>

using namespace std;

struct Worker{
	char fullName[26];
	char bDay[10];
	char position[10];
	char salary[9];
};

void print_worker(Worker *arr, int size)
{	cout << "\n___________________________________________________________________________" << endl;
	cout << "| ID |        Full name         |    Date    |     Position    |  Salary |" << endl;
	cout << "___________________________________________________________________________" << endl;
	for(int i = 0; i< size; i++)
	{	
	
	/*
		//тут надо подумать, в 11блокноте расчеты
		int name_1 = strlen(arr[i].fullName);
		char Nn[2] = " ";
		
		
		cout <<"   "<< i << "";
		if(name_1<25){
			cout <<"   "<< arr[i].fullName << ((25 - name_1)*Nn)<< "\t";
		}else{
			cout <<"   "<< arr[i].fullName << "\t";
		}
	*/
		cout <<"\n\n  "<< i << "\t";
		cout <<"  "<< arr[i].fullName << "\t";
		cout <<"  "<< arr[i].bDay<<'\t';
		cout <<"  "<< arr[i].position<<'\t';
		cout <<"  "<< arr[i].salary<<endl<<endl;
	}
}

template <typename T>
void DeleteInIndex(T*&arr, int &size, int index)
{
	int j;
	T * ret_arr = new T[size-1];
	for(int i = 0; i < size-1; i++)
		{
			if(i==index){
				ret_arr[i] = arr[j+1];
				j+=1;
			}
			
			else{
				ret_arr[i] = arr[j];
				j++;
			}
			
		}
	delete []arr;
	size--;
	arr = ret_arr;
}

template <typename T>
void AddToIndex(T*&arr, int &size, int index, T new_item)
{
	T * ret_arr = new T[size+1];
	int j;
	for(int i = 0; i < size+1; i++)
	{	
		if(i==index)
		ret_arr[i] = new_item;
		else{
		ret_arr[i] = arr[j];
		j++;
		}
	}
	delete []arr;
	size++;
	arr = ret_arr;
}

template <typename T>
void Add(T*&arr, int &size, T new_item)
{
	T * ret_arr = new T[size+1];
	for(int i = 0; i < size; i++)
		ret_arr[i] = arr[i];
	
	ret_arr[size] = new_item;
	if(size > 0)
		delete []arr;
	size++;
	arr = ret_arr;
}

Worker read_data()
{
	cin.ignore();// пришлось добавить(оставить, так как воспринимает как ввод)
	Worker new_worker;
	puts("\nFull name: ");
	SetConsoleCP(1251);
	gets(new_worker.fullName);
	SetConsoleCP(866);
	puts("\nDate: ");
	SetConsoleCP(1251);
	gets(new_worker.bDay);
	SetConsoleCP(866);
	puts("\nPosition: ");
	SetConsoleCP(1251);
	gets(new_worker.position);
	SetConsoleCP(866);
	puts("\nSalary: ");
	SetConsoleCP(1251);
	gets(new_worker.salary);
	SetConsoleCP(866);
	return new_worker;
}


int main(int argc, char** argv) {
	setlocale(LC_ALL, "RUS");
	cout << "theme: Homework - 17." << endl;
	cout << "date: 14.07.2019" << endl;
	cout << "author: Timur Y." << endl;
	cout << "\n\n" << endl;
/*	
	Worker s;
	
	puts("Проверка функции puts()");
	SetConsoleCP(1251);
	gets(s.fullName);
	SetConsoleCP(866);
	int len = strlen(s.fio);
	
	cout << len << endl;
	puts(s.fullName);
*/
	Worker *arr;
	int size = 0;
	
	while(true){
		cout << "\n\n1.	Добавление нового работника.\n"
			 << "2.	Удаление работника по  индексу.\n"
			 << "3.	Добавление работника по указанному индексу.\n"
			 << "4.	Вывод списка работников в консоль.\n"
			 << "5.	Выход.\n"
			 << "> ";
			 int menuButton;
			 cin >> menuButton;
			 switch(menuButton){
			 	case 1:
			 		Add(arr, size, read_data());
			 		break;
			 	case 2:
			 		cout << "Введите индекс работника для удаления: ";
			 		int delIndex;
			 		cin >> delIndex;
			 		DeleteInIndex(arr,size,delIndex);
			 		break;
			 	case 3:
			 		cout << "Введите индекс работника для добавления: ";
			 		int addIndex;
			 		cin >> addIndex;
			 		AddToIndex(arr, size,addIndex,read_data());
			 		break;
			 	case 4:
			 		print_worker(arr,size);
			 		break;
			 	case 5:
			 		return 0;
			 		break;
			 	default:
			 		cout << "Вы ввели некорректрое число. Ошибка.";
			 		return 0;
			 		break;
			 }
	}
	
	return 0;
}
