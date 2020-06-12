#include <iostream>
#include <time.h>
#include <string.h>
#include <stdio.h>
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
	
	Person *arr;
	int size = 0;
	
	Add(arr, size, read_data());
	Add(arr, size, read_data());
	Add(arr, size, read_data());
	
	print_person(arr, size);
	
	Insert(arr, size, 1, read_data());
	print_person(arr, size);
	return 0;
}
