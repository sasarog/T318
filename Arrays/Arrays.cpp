#include <iostream>
using namespace std;

int main() {
	const int size = 10;
	int mas[size];
	//Первый способ инициализации
	//mas[0] = 1;
	//mas[1] = 2;
	//mas[2] = 3
	//второй способ инициализации
	//int mas[] = {1,2,3,4,5,6,7,8,9,10};	//составнлй инициализатор
	//Третий способ - циклом
	for (int i = 0; i < size; i++) {
		mas[i] = i + 1;
		//mas[i] = rand() % 10;
		cout << "mas[" << i << "] = " << mas[i] << endl;
	}
	//поиск элемента в массиве
	
	/*
	for (int i = 0; i < size; i++) {
		if (mas[i] == eva) {
			cout << eva << "in mas";
			break;
			//1 2 3 4 5 6 7 8 9 10
		}
	}
	*/
	int eva = 3;
	int left = 0, right = size - 1, srednee;
	while (mas[srednee = ((right - left)) / 2 + left] != eva) {
		if (mas[srednee] > eva) {
			right = srednee-1;
		}
		else {
			left = srednee+1;
		}
		if (left == right) {
			return 1;
		}
		//1 2 3 4 5 6 7 8 9 10 
	}



}