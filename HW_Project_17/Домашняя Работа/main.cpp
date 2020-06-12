/*
homework
18.07.19
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <windows.h>
#include <cwchar>

using namespace std;

struct Person{
	string name;
	string b_date;
	string position;
	double salary;
};

void print_person(Person *a, int size) {
	for(int i = 0; i < size; i++){
		cout 	<< a[i].name << '\t'
				<< a[i].b_date<<'\t'
				<< a[i].position<<'\t'
				<< a[i].salary<<endl;
	}
}

template <typename T>
void Add(T *&arr, int &size, T new_item){
	T * ret_arr = new T[size+1];
	for(int i = 0; i<size; i++){
		ret_arr[i] = arr[i];
	}
	ret_arr[size] = new_item;
	if(size > 0){
		delete []arr;
	}
	size++;
	arr = ret_arr;	
}

template <typename T>
void Add2(T *&arr, int &size,int index , T new_item){
	if(index > size || index < 0){
		return;
	}
	T * ret_arr = new T[size+1];
	int jj = 0;
	for(int i = 0; i<size; i++){
		if(i == index){
			ret_arr[jj] = new_item;
			jj++;
		}
			ret_arr[jj] = arr[i];
			jj++;
	}
	delete []arr;
	size++;
	arr = ret_arr;	
}

template <typename T>
void Delte(T *&arr, int &size, int index){
		if(index >= size || index < 0){
		return;
	}
	T * ret_arr = new T[size-1];
	int jk = 0;
	for(int i = 0; i<size-1; i++){
		if(index == i){
			ret_arr[jk] = arr[i];
			i += 1;
		}
		ret_arr[jk] = arr[i];
		jk++;
		
		
	}

delete []arr;
arr = ret_arr;	
size--;
}


template <typename T>
void Insert(T *&arr, int &size, int index, T new_item){
	if(index > size || index < 0){
		return;
	}
	T * ret_arr = new T[size+1];
	int k = 0;
	for(int i = 0; i<size; i++){
		if(i == index){
			ret_arr[k] = new_item;
			k++;
		}
		ret_arr[k] = arr[i];
		k++;
	}
	delete []arr;
	size++;
	arr = ret_arr;	
}

Person read_data(){
	cin.ignore();
	Person new_person;
	cout << "name:";
	getline (cin,new_person.name);
	cout << "date:";
	cin >> new_person.b_date;
	cout << "position:";
	cin >> new_person.position;
	cout << "salary:";
	cin >> new_person.salary;
	return new_person;
}

int main(int argc, char** argv) {
	setlocale (LC_ALL, "Rus");
	/*cout << "theme: Homework - 17." << endl;
	cout << "date: 14.07.2019" << endl;
	cout << "author: Timur Y." << endl;
	cout << "\n\n" << endl;*/
	cout << "\n\n\n\n\n\n\n";
	cout << "\t\t\t         PRESS ENTER \n\n ";
	
	system("pause  >> NUL");
	Person *arr;
	int size = 0;
	system ("cls");
	while(true){

	int m_button;
	cout << "\n\n";
	cout << "\t\t\t1.ƒобавление нового работника\n"
	<<"\t\t\t2.”даление работника по  индексу\n"
	<<"\t\t\t3.ƒобавление работника по указанному индексу\n"
	<<"\t\t\t4.¬ывод списка работников в консоль\n"
	<<"\t\t\t5.Exit\n"
	<<">  ";

	cin >> m_button;
	switch(m_button){
	case 1:
			Add(arr, size, read_data());
			break;
	case 2:
		cout << "¬ведите пользовател€ которо нужно удалить : ";
		int q;
		cin >> q;
		Delte(arr, size, q);
			break;
	case 3:
		cout << "¬ведите индекс по которому нужно добавить пользовател€ : ";
		int r;
		cin >> r;
		if (r >= size){
			Add(arr, size, read_data());
		}else{
		Add2(arr, size, r, read_data());
		}
			break;
	case 4:
		print_person(arr, size);
			break;
	case 5:
		return 0;
			break;
	default :
	return 0;
			break;
	}
}
	return 0;
}
