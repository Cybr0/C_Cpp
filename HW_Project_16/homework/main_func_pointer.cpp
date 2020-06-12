#include <iostream>
#include <stdlib.h>
using namespace std;
int plus1(int a, int b){
	return a + b;
}
int minus1(int a, int b){
	return a - b;
}
void do_action(int a, int b, int (*f)(int, int)){
	cout << f(a, b) << endl;
}
int main(int argc, char** argv) {
	do_action(3,5, plus1);
	do_action(3,5, minus1);
	
	int (*arifmetics[2])(int, int);// = {plus1, minus1};
	arifmetics[0] = plus1;
	arifmetics[1] = minus1;
	for(int i = 0; i < 2; i++){
		cout << (*arifmetics[i])(6,2) << endl;
	}
	return 0;
}

