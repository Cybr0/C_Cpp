#ifndef DOMAGIC_H
#define DOMAGIC_H

/////////////// сортировка сортировок
template<typename T>
void doMagic(T a[], int size = 5) {
	int k;
	T x;
	float like[5] = {1, 2, 3, 4, 5};
	float boo;
	
	for(int i = 0; i < size; i++){
		k = i;
		x = a[i];
		boo = like[i];
		for (int j = i + 1; j < size; j++){
			if(a[j] < x){
				k = j;
				x = a[j];
				boo = like[j];
			}
		}
		a[k] = a[i];
		a[i] = x;
		like[k] = like[i];
		like[i] = boo;
	}
	for(int i = 0; i < size; i++){
		like[i];
		if (like[i] == 1){
			cout <<"Duration of selectSort\t= " << a[i] << " s." << endl;}
		else if (like[i] == 2){
			cout <<"Duration of bubbleSort\t= " << a[i] << " s." << endl;}
		else if (like[i] == 3){
			cout <<"Duration of yakerSort\t= " << a[i] << " s." << endl;}
		else if (like[i] == 4){
			cout <<"Duration of shakerSort\t= " << a[i] << " s." << endl;}
		else if (like[i] == 5){
			cout <<"Duration of insertSort \t= " << a[i] << " s." << endl;}
	}
}

#endif
