#include <iostream>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RUS");
	
	int i = 1;
	cout << "\n\n\t\t\t������" << endl;
	cout << "\n\t\t\t�����" << endl;
	while(true){
		int cmd = getch();
		if(cmd == 224){
			cmd = getch();
			switch (cmd){
				case 72:
					system("cls");
					i++; 
					if(i % 2 != 0){
						cout << "\n\n\t\t\t������" << endl;
						cout << "\n\t\t\t�����" << endl;
					}else if (i % 2 == 0){
						cout << "\n\n\t\t\t������" << endl;
						cout << "\n\t\t\t�����" << endl;
					}
					break;
				
				case 80:
					system("cls");
					i++; 
					if(i % 2 != 0){
						cout << "\n\n\t\t\t������" << endl;
						cout << "\n\t\t\t�����" << endl;
					}else if (i % 2 == 0){
						cout << "\n\n\t\t\t������" << endl;
						cout << "\n\t\t\t�����" << endl;
					}
					
					break;
			}
		}
	}
	return 0;
}
