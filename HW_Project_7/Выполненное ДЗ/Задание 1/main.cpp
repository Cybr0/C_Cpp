#include <iostream>
#include <cmath>

/*
������� � ����� ��-7
05.06.02019
������ �����

 */
using namespace std;
int main(int argc, char** argv) {
	setlocale (LC_ALL, "Rus");
	cout << "����: ������� � ����� ��-5\n";
	cout << "two-dimensional array\n";
	cout << "����: 05.06.2019\n";
	cout << "�����: ������ �����\n";
	cout << "\n\n\n";
	
	
	
	
	cout << "������� ����� ����� �����: ";
	int var;
	cin >> var;
	int var_2 = var;  //������ ��������, ��� ��� �������� ����� ��������
	int count = 0;
	 
	 
	 
	while(var_2 > 0){
		
		
		var_2 = var_2/10;   // ��� ��������� ���������� ����
		count +=1;
		
	}
	
//	cout << count << endl;
//	cout << var << endl;

	int count_2 = count;	//������ ��������, ��� ��� �������� ����� ��������
		
	int arr[count];		
	
	
	while (count != 0){
		
		int digits = var /   pow (10, count - 1);   // ��� � ������ ������
		var -= digits * pow (10, count - 1);
		arr[i] = digits;
		
		count -= 1;
	}
			
		
	
	cout << "\n\n\n� ��� ������\n\n";
	
	for (int i = 0; i < count_2; i++) {
		
		cout << "������� ["<< i <<"] =" << arr[i] << endl << endl;
	}

//cout << pow (10, count - 1);	
	
	
	return 0;
}
