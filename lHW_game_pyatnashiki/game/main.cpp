#include <iostream>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

template <typename T>
void printArr(T arr[4][4], int x , int y){
	cout << "\n\n\n\n\n\n\n";
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cout << "\t   " << arr[i][j] << "\t";
		}
		cout << "\n\n";
	}
	
}



//void printArr( int arr[4][4], int x , int y){
//	for(int i = 0; i < x; i++){
//		for(int j = 0; j < y; j++){
//			if(arr[i][j] == 16){
//				
//			}
//		}
//	}
//	
//}


int main(int argc, char** argv) {
	setlocale(LC_ALL, "RUS");
	
	const int x = 4;
	const int y = 4;
	
	string arr [x][y] 
	{{"1","2","3","4"},
	{"5","6","7","8"},
	{"9","10","11","12"},
	{"13","14","15"," "}};
	
	printArr(arr, x , y);
	
	while(true){
		
		int t = getch();
		if (t = 224){
			t = getch();
			switch(t){
				case 72:
					for(int i = 0; i < x; i++){
						for(int j = 0; j < y; j++){
							if(arr[i][j] == " "){
								if(arr[0][0] == " " || arr[0][1] == " " || arr[0][2] == " " || arr[0][3] == " "){
									break;
								}else{	
									string move_up = arr[i][j];
									arr[i][j] = arr[i-1][j];
									arr[i-1][j] = move_up;
								}
								break;
							}
						}
					}
					system("cls");
					printArr(arr, x , y);
					break;
					
				case 80:
					for(int i = 0; i < x; i++){
						for(int j = 0; j < y; j++){
							if(arr[i][j] == " "){
								if(arr[3][0] == " " || arr[3][1] == " " || arr[3][2] == " " || arr[3][3] == " "){
									break;
								}else{
									string move_down = arr[i][j];
									arr[i][j] = arr[i+1][j];
									arr[i+1][j] = move_down;
									//break;
									goto Exit_move_down;
								}
							}
						}
					}
					Exit_move_down:
					system("cls");
					printArr(arr, x , y);
					break;
					
				case 77:
					for(int i = 0; i < x; i++){
						for(int j = 0; j < y; j++){
							if(arr[i][j] == " "){
								if(arr[0][3] == " " || arr[1][3] == " " || arr[2][3] == " " || arr[3][3] == " "){
									break;
								}else{
									string move_right = arr[i][j];
									arr[i][j] = arr[i][j+1];
									arr[i][j+1] = move_right;
									break;
								//	goto Exit_move_right;
								}
							}
						}
					}
					//Exit_move_right:
					system("cls");
					printArr(arr, x , y);
					break;
					
				case 75:
					for(int i = 0; i < x; i++){
						for(int j = 0; j < y; j++){
							if(arr[i][j] == " "){
								if(arr[0][0] == " " || arr[1][0] == " " || arr[2][0] == " " || arr[3][0] == " "){
									break;
								}else{
									string move_left = arr[i][j];
									arr[i][j] = arr[i][j-1];
									arr[i][j-1] = move_left;
									break;
								}
							}
						}
					}
					system("cls");
					printArr(arr, x , y);
					break;
			}
		}
		
		
	}
	
	
	
	
	
	
	return 0;
}
