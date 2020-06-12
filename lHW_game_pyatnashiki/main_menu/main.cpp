#include <iostream>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RUS");
	
	int i = 1;
	cout << "\n\n\t\t\tÈÃÐÀÒÜ" << endl;
	cout << "\n\t\t\tÂûõîä" << endl;
	while(true){
		int cmd = getch();
		if(cmd == 224){
			cmd = getch();
			switch (cmd){
				case 72:
					system("cls");
					i++; 
					if(i % 2 != 0){
						cout << "\n\n\t\t\tÈÃÐÀÒÜ" << endl;
						cout << "\n\t\t\tÂûõîä" << endl;
					}else if (i % 2 == 0){
						cout << "\n\n\t\t\tÈãðàòü" << endl;
						cout << "\n\t\t\tÂÛÕÎÄ" << endl;
					}
					break;
				
				case 80:
					system("cls");
					i++; 
					if(i % 2 != 0){
						cout << "\n\n\t\t\tÈÃÐÀÒÜ" << endl;
						cout << "\n\t\t\tÂûõîä" << endl;
					}else if (i % 2 == 0){
						cout << "\n\n\t\t\tÈãðàòü" << endl;
						cout << "\n\t\t\tÂÛÕÎÄ" << endl;
					}
					
					break;
			}
		}
	}
	return 0;
}
