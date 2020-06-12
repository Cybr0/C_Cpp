/*
���� �����
12.06.2019
������� �����
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
	
	// ��� ������� ��������� � �������
	system("cls");
	cout << "� || ����� 1   ||  ���������" << endl;
	for (int i=0; i < 5; i++){
		cout << ""<<i+1<<" ||   ";
		if(arr[0][i]<10){
			cout << arr[0][i]<<" ";
		}else{
			cout << arr[0][i];
		}
		cout << "      ||    " << arr[1][i] << endl;
	}
	// ����� �������
	
	cout << "\n����� 1:  "<<player_a<< "\t ���������:  "<<player_b<<"\n";
	if(player_a > player_b){
		cout << "\n\n����� 1 - �������!\n\n";
	}
	else if (player_a == player_b){
		cout << "\n�����" << endl
			<< "������� ����������?" << endl << endl
			<< "1. ��" << endl
			<< "2. ���" << endl;
			
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
		cout << "\n\n��������� - �������!\n\n";
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
	
	// ��� ������� ��������� � �������
	system("cls");
	cout << "� || ����� 1   ||  ����� 2" << endl;
	for (int i=0; i < 5; i++){
		cout << ""<<i+1<<" ||   ";
		if(arr[0][i]<10){
			cout << arr[0][i]<<" ";
		}else{
			cout << arr[0][i];
		}
		cout << "      ||    " << arr[1][i] << endl;
	}
	// ����� �������
	
	cout << "\n����� 1:  " << player_a << "\t ����� 2:  " << player_b << "\n";
	if(player_a > player_b){
		cout << "\n����� 1 �������!\n\n";
	}
	else if (player_a == player_b){
		cout << "\n�����" << endl
			<< "������� ����������?" << endl << endl
			<< "1. ��" << endl
			<< "2. ���" << endl << endl;
			
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
		cout << "\n����� 2 �������!\n\n";
	}
	cout << "\n";
}

bool soloGame(){
	system("cls");
	
	int soloMenuPunkt;
	int result[2][5];
	for(int i = 0; i < 5; i++){
		cout << "���� � �����������\n"
		<< "1. ������\n"
		<< "2. �����\n"
		<< "3. �����\n"
		<< ">";
		cin >> soloMenuPunkt;
		switch(soloMenuPunkt){
			case 1:
				result[0][i] = randomGen();
				result[1][i] = randomGen();
				cout << "����� : "<<result[0][i] << " ����:"<<result[1][i];
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
		cout << "����� 1\n"
		<< "1. ������\n"
		<< "2. �����\n"
		<< "3. �����\n"
		<< ">";
		cin >> player_1;
		
		cout << "\n����� 2\n"
		<< "1. ������\n"
		<< "2. �����\n"
		<< "3. �����\n"
		<< ">";
		cin >> player_2;
		cout << endl;
		switch(player_1){
			case 1:
				result[0][i] = randomGen();
				//result[1][i] = randomGen(); �����_2
				cout << "����� 1: "<<result[0][i];
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
				//result[0][i] = randomGen(); �����_1 
				result[1][i] = randomGen();
				cout << "����� 2: "<<result[1][i];
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
	cout << "���� \"�����\"\n";
	cout << "����:012.06.2019\n";
	cout << "�����: ������� �����\n";
	cout << "\n\n\n";
	srand(time(NULL));
	while(true){
		system("cls");
		cout << "������� ����\n"
		<< "1. ������ � �����������\n"
		<< "2. ������ � ���������\n"
		<< "3. �����\n"
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


