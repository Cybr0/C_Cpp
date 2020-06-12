#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL,"RUS");
	
	
	if(argc <= 1){
		cout << "Нет больше аргументов!";
		return 0;
	}
	
	
	FILE *readfile;
	readfile = fopen(argv[1], "r");
	if(readfile == NULL){
		cout << "Файл не найден!";
		return 0;
	}
	
	cout << "\nТекст с файла:\n";
	int b_size = 1024;
	char buffer[b_size];
	while(fgets(buffer,b_size, readfile) != NULL){
		cout << buffer;
	}
	fclose(readfile);
	for(int i = 0; i < b_size; i++){
		
		// англ
		if(buffer[i] == 88){
			buffer[i] = 65;
		}
		else if(buffer[i] == 89){
			buffer[i] = 66;
		}
		else if(buffer[i] == 90){
			buffer[i] = 67;
		}
		else if(buffer[i] >= 65 && buffer[i] <= 87){
			buffer[i] +=3;
		}
		
		
		else if(buffer[i] == 120){
			buffer[i] = 97;
		}
		else if(buffer[i] == 121){
			buffer[i] = 98;
		}
		else if(buffer[i] == 122){
			buffer[i] = 99;
		}
		else if(buffer[i] >= 97 && buffer[i] <= 119){
			buffer[i] +=3;
		}
		
		// русс
		else if(buffer[i] == (-35)){
			buffer[i] = (-64);
		}
		else if(buffer[i] == (-34)){
			buffer[i] = (-63);
		}
		else if(buffer[i] == (-33)){
			buffer[i] = (-62);
		}
		else if(buffer[i] >= (-64) && buffer[i] <= (-33)){
			buffer[i] +=3;
		}
		
		
		else if(buffer[i] == (-3)){
			buffer[i] = (-32);
		}
		else if(buffer[i] == (-2)){
			buffer[i] = (-31);
		}
		else if(buffer[i] == (-1)){
			buffer[i] = (-30);
		}
		else if(buffer[i] >= (-32) && buffer[i] <= (-1)){
			buffer[i] +=3;
		}
	}
	
	FILE *file;
	file = fopen("output.txt", "w");
	if(file == NULL){
		cout << "Файл не найден!";
		return 0;
	}
	//fputs(buffer,file);
	fprintf(file,"%s", buffer);
	fclose(file);
	
	cout << "\n\nЗашифрованный текст:\n";
	cout << buffer;
	return 0;
}
