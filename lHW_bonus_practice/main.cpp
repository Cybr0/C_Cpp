#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct statistic {
	char name[50];
	int score;
};
int main(int argc, char** argv) {
	setlocale (LC_ALL, "RUS");
	srand(time(NULL));
	
	FILE * file;
	file = fopen("score.txt","a");
	if(file == NULL)
		cout << "Error" << endl;
	else{
		int d = 5;
		char arr[] = "sfasf";
		fprintf(file,"\n%s %d",arr, d);
	}
	fclose(file);
	
	
	
	
	const int size = 6;
	statistic players[size];
	FILE * open_file;
	open_file = fopen("score.txt", "r");
	if(open_file == NULL)
		cout << "Error" << endl;
	else{
		int i = 0;
			while(fscanf(open_file,"%s %d", players[i].name, &players[i].score) != EOF) {
			 i++;
			 if(i == 6)
			 	break;
			 }
	}
	
	
	
	
	for(int i = 0; i < 5; i ++){
		cout << "¹ "<< i+1 <<"  " << players[i].name <<"\t"<< players[i].score << endl;
	}
	fclose(open_file);
	
	return 0;
}
