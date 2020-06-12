#include <iostream>
#include <ctime>

/*
������� � ����� ��-7
05.06.02019
������ �����

 */
using namespace std;
int main(int argc, char** argv) {
	setlocale (LC_ALL, "Rus");
	srand (time(NULL));
	cout << "����: ������� � ����� ��-5\n";
	cout << "two-dimensional array\n";
	cout << "����: 05.06.2019\n";
	cout << "�����: ������ �����\n";
	cout << "\n\n\n";
	
	cout << "������ ����! � ������ �3." << endl
			<<"��� ������� ��������� ������ ����� � ����������� �������." << endl << endl;
	int str = 2;
	int col = 3;
	
	
	cout << "�� ������ ������� ������ ����? " << endl;
	cout << "��� ������ '��' ������� = 1, � ��� ������ '���' ������� = 0" << endl;
	
	int button_1;
	cin >> button_1;
	
	int arr[str][col]
		{
		{1,2,3},
		{3,2,1}
		};
	  
	  
	if (button_1 == 1) {
	
		cout << "������� ���������� ����� � �������: ";
		cin >> str;
	
		cout << "\n������� ���������� �������� � �������: ";
		cin >> col;
		
		
		
		cout << "\n\n������ ["<<str<<"]["<<col<<"] ������." << endl
				<< "������� ��� ��������� ����? " << endl
				<< "��� ������ '��' ������� = 1, � ��� ������ '���' ������� = 0" << endl;
		
		cin >> button_1;	
		
		if (button_1 == 1) {
			
				cout << "\n��������� ������ ����������. ��������� �� ��������." << endl;
	
				for (int i = 0; i < str; i++){
		
				cout << "��������� "<< i <<" ������:\n";
		
				for (int j = 0; j < col; j++){
			
					cout << "������� "<< j <<" = ";
					cin >> arr[i][j];
				
					}
				cout << endl;
				}
	
				
		}
		
		else if (button_1 == 0){
			cout << "\n������ �������� �������������." << endl;
			for (int i = 0; i < str; i++){
		
				for (int j = 0; j < col; j++){
			
					arr[i][j] = rand() % 10;
				
					}
				}
			
		}
		else {
			cout << "\n�� ����� �� ���������� �����." << endl;
		return 0;
		}
	}
	
	else if (button_1 == 0) {
		cout << "\n\n������ [2][3] ������ �������������." << endl << endl;
		
	}
	
	else {
		cout << "\n�� ����� �� ���������� �����." << endl;
		return 0;
	}
	
	
	

	
	cout << "\n\n��� ������ ��������� �����: \n\n";
	
	for (int i = 0; i < str; i++){
		
		
		for (int j = 0; j < col; j++){
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	
//	cout << sum << endl;
	
	int sum = 0;
	
	for (int i = 0; i < str; i++){
		for (int j = 0; j < col; j++){
			sum += arr[i][j];
		}
	}
	
//	cout << "\n\n\n����� ���� ��������� ������� = "<< sum << endl;
	
	double average = (double)sum / (str * col);
//	cout << "C������ �������������� ���� ��������� ������� = " << average << endl;


	int min = arr[0][0];
	for (int i = 0; i < str; i++){
		for (int j = 1; j < col; j++){
			if(min > arr[i][j]){
				min = arr[i][j];
			}
		}
	}
//	cout << "����������� ������� ������� = " << min << endl;
	
	
	
	
	int max = arr[0][0];
	for (int i = 0; i < str; i++){
		for (int j = 1; j < col; j++){
			if(max < arr[i][j]){
				max = arr[i][j];
			}
		}
	}
//	cout << "������������ ������� ������� = " << max << endl;







	cout << "\n\n\n���, ������ ����� ��������� ������ ����� � ���� �������. ����� ���������...\n" << endl
			<< "__________________________________________" << endl
			<< "����� ���� ��������� �������, �����   - 1." << endl
			<< "__________________________________________" << endl
			<< "����. ����. ���� ���������, �����     - 2." << endl
			<< "__________________________________________" << endl
			<< "����������� ������� �������, �����    - 3." << endl
			<< "__________________________________________" << endl
			<< "������������ ������� �������, �����   - 4." << endl
			<< "__________________________________________" << endl
			<< "����� ��������� ��� �����, �����      - 0." << endl
			<< "__________________________________________" << endl;
			
			
	cin >> button_1;
	switch (button_1){
		case 0:
			cout << "\n����� ���� ��������� ������� = "<< sum << endl;
			cout << "C������ �������������� ���� ��������� ������� = " << average << endl;
			cout << "����������� ������� ������� = " << min << endl;
			cout << "������������ ������� ������� = " << max << endl;
			break;
		case 1:
			cout << "\n����� ���� ��������� ������� = "<< sum << endl;
			break;
		
		case 2:
			cout << "\nC������ �������������� ���� ��������� ������� = " << average << endl;
			break;
		
		case 3:
			cout << "\n����������� ������� ������� = " << min << endl;
			break;
		
		case 4:
			cout << "\n������������ ������� ������� = " << max << endl;
			break;
		
		default:
			cout << "\n�� ����� �� ���������� �������� " << endl;
			return 0;	
	}
	

	
	return 0;
}
