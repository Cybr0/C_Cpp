/*
Игра кости
12.06.2019
Ахмедов Ботир
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool soloGame();
bool multiPlayer();


int randomGen(){
	
	return rand()%(12 + 1 -2) + 2;
}

bool countResults(int arr[2][5]){
	int player_a = 0;
	int player_b = 0;
	
	for(int i = 0; i < 5; i++){
		if(arr[0][i] > arr[1][i]){
			player_a++;
		}else{
			player_b++;
		}
	}
	
	// тут выводит результат в таблице
	system("cls");
	cout << "№ || Игрок 1   ||  Компьютер" << endl;
	for (int i=0; i < 5; i++){
		cout << ""<<i+1<<" ||   ";
		if(arr[0][i]<10){
			cout << arr[0][i]<<" ";
		}else{
			cout << arr[0][i];
		}
		cout << "      ||    " << arr[1][i] << endl;
	}
	// конец таблицы
	
	cout << "\nИгрок 1:  "<<player_a<< "\t Компьютер:  "<<player_b<<"\n";
	if(player_a > player_b){
		cout << "\n\nИгрок 1 - победил!\n\n";
	}
	else if (player_a == player_b){
		cout << "\nНичья" << endl
			<< "Желаете переиграть?" << endl << endl
			<< "1. Да" << endl
			<< "2. Нет" << endl;
			
		int select;
		cin >> select;
		switch(select){
			case 1:
				return soloGame();
				break;
			case 2:
				return false;
				break;
			default:
				return true;
				break;
		}	
	}
	else{
		cout << "\n\nКомпьютер - победил!\n\n";
	}
	cout << "\n";
}


bool countResults_pvp(int arr[2][5]){
	int player_a = 0;
	int player_b = 0;
	
	for(int i = 0; i < 5; i++){
		if(arr[0][i] > arr[1][i]){
			player_a++;
		}else{
			player_b++;
		}
	}
	
	// тут выводит результат в таблице
	system("cls");
	cout << "№ || Игрок 1   ||  Игрок 2" << endl;
	for (int i=0; i < 5; i++){
		cout << ""<<i+1<<" ||   ";
		if(arr[0][i]<10){
			cout << arr[0][i]<<" ";
		}else{
			cout << arr[0][i];
		}
		cout << "      ||    " << arr[1][i] << endl;
	}
	// конец таблицы
	
	cout << "\nИгрок 1:  " << player_a << "\t Игрок 2:  " << player_b << "\n";
	if(player_a > player_b){
		cout << "\nИгрок 1 победил!\n\n";
	}
	else if (player_a == player_b){
		cout << "\nНичья" << endl
			<< "Желаете переиграть?" << endl << endl
			<< "1. Да" << endl
			<< "2. Нет" << endl << endl;
			
		int select;
		cin >> select;
		switch(select){
			case 1:
				return multiPlayer();
				break;
			case 2:
				return false;
				break;
			default:
				return true;
				break;
		}
	}
	
	else{
		cout << "\nИгрок 2 победил!\n\n";
	}
	cout << "\n";
}

bool soloGame(){
	system("cls");
	
	int soloMenuPunkt;
	int result[2][5];
	for(int i = 0; i < 5; i++){
		cout << "Игра с компьютером\n"
		<< "1. Играть\n"
		<< "2. Сброс\n"
		<< "3. Выход\n"
		<< ">";
		cin >> soloMenuPunkt;
		switch(soloMenuPunkt){
			case 1:
				result[0][i] = randomGen();
				result[1][i] = randomGen();
				cout << "Игрок : "<<result[0][i] << " Комп:"<<result[1][i];
				cout << "\n\n";
				break;
			case 2:
				return false;
				break;
			case 3:
				return true;
				break;
			default:
				break;
		}
		cout << endl;
	}
	countResults(result);
	system("pause");
	return false;
}

bool multiPlayer(){
	system("cls");
	
	int player_1;
	int player_2;
	int result[2][5];
	for(int i = 0; i < 5; i++){
		cout << "Игрок 1\n"
		<< "1. Играть\n"
		<< "2. Сброс\n"
		<< "3. Выход\n"
		<< ">";
		cin >> player_1;
		
		cout << "\nИгрок 2\n"
		<< "1. Играть\n"
		<< "2. Сброс\n"
		<< "3. Выход\n"
		<< ">";
		cin >> player_2;
		cout << endl;
		switch(player_1){
			case 1:
				result[0][i] = randomGen();
				//result[1][i] = randomGen(); игрок_2
				cout << "Игрок 1: "<<result[0][i];
				cout << "\n\n";
				break;
			case 2:
				return false;
				break;
			case 3:
				return true;
				break;
			default:
				break;
				
		}
		switch(player_2){
			case 1:
				//result[0][i] = randomGen(); игрок_1 
				result[1][i] = randomGen();
				cout << "Игрок 2: "<<result[1][i];
				cout << "\n\n";
				break;
			case 2:
				return false;
				break;
			case 3:
				return true;
				break;
			default:
				break;		
		}
		cout << endl << endl;
		
	}
	countResults_pvp(result);
	system("pause");
	return false;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Rus");
	cout << "Игра \"Кости\"\n";
	cout << "дата:012.06.2019\n";
	cout << "автор: Ахмедов Ботир\n";
	cout << "\n\n\n";
	srand(time(NULL));
	while(true){
		system("cls");
		cout << "Главное меню\n"
		<< "1. Играть с компьютером\n"
		<< "2. Играть с человеком\n"
		<< "3. Выход\n"
		<< ">";
		int menuPunkt;
		cin >> menuPunkt;
		switch(menuPunkt){
			case 1:
				if(soloGame()){
					return 0;
				}
			break;
			case 2:
				if(multiPlayer()){
					return 0;
				}
			break;
			case 3:
				return 0;
			break;
			default:
				
			break;
		}
	}
	return 0;
}


