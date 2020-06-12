/*
Функции
10.06.2019
Ахмедов Ботир
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void Hello(){
	cout << "Hello world!\n";
}

int get_rand(int max, int min){
	srand(time(NULL));
	return rand() % (max+1-min)+min;
}

void draw_rectangle(int a, int b){
	for(int i = 0; i < a; i++){
		for(int k = 0; k < b;k++){
			cout << "* ";
		}
		cout << "\n";
	}
}

int main(int argc, char** argv) {
	
	Hello();
	Hello();
	Hello();
	
	cout << get_rand(2, 6) << endl;
	cout << get_rand(10, 100) << endl;
	cout << get_rand(0, 10) << endl;
	
	draw_rectangle(10,10);
	cout <<"\n\n";
	draw_rectangle(20,20);
	cout <<"\n\n";
	draw_rectangle(1,5);
	cout <<"\n\n";
	
	
	return 0;
}
